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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root){
            return result;
        }
        queue<TreeNode*> zigzag;
        zigzag.push(root);
        bool flag = 1;
        while(!zigzag.empty()){
            int size = zigzag.size();
            vector<int>row(size);
            for(int i=0;i<size;i++){
                TreeNode* node = zigzag.front();
                zigzag.pop();
                int index = flag ? i:(size-i-1);
                row[index] = node->val;
                if(node->left){
                    zigzag.push(node->left);
                }
                if(node->right){
                    zigzag.push(node->right);
                }
                
            }
            flag = !flag;
                result.push_back(row);
        }
        return result;
    }
};