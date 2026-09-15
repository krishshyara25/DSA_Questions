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
TreeNode* prev = NULL;
    int ans = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        if(!root) return ans;
        if(root->left){
            int leftmin = getMinimumDifference(root->left);
            ans = min(ans,leftmin);
        }
        if(prev != NULL){
            ans = min(ans,root->val - prev->val);
        }
        prev = root;
        if(root->right){
            int rightmin = getMinimumDifference(root->right);
            ans = min(ans,rightmin);
        }
        return ans;
    }
};