/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

int height(TreeNode* root){
    if(root == NULL) return 0;

int left = height(root->left);
int right = height(root->right);

   // If one child is missing, take the other
    if (root->left == NULL) return right + 1;
    if (root->right == NULL) return left + 1;
 
int ans = min(left,right) +1;
return ans;
}

class Solution {
public:
    int minDepth(TreeNode* root) {
        

        return  height(root);
        
    }
};