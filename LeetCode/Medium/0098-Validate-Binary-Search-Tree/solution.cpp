// C++
class Solution {
public:
    bool check(TreeNode* node, long minval, long maxval) {
        if (!node)
            return true;

        if (node->val <= minval || node->val >= maxval)
            return false;

        return check(node->left, minval, node->val) &&
               check(node->right, node->val, maxval);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LONG_MIN, LONG_MAX);
    }
};