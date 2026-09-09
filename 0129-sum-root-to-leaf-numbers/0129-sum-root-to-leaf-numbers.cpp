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
    int sum = 0;
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return sum;
    }
    int solve(TreeNode* root,int num){
        if(!root) return 0;
        num = num*10 + root->val;
        if(!root->left && !root->right){
            sum += num;
            return sum;
        }
        solve(root->left,num);
        solve(root->right,num);
        return sum;
    }
};