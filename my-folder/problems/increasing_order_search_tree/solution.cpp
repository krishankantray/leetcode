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
    TreeNode* ans = nullptr;
    TreeNode* ansHead = nullptr;
    void traverse(TreeNode* root){
        if(!root) return;
        traverse(root->left);
        if(!ans){
            cout<<root->val;
            ans = new TreeNode(root->val);
            ansHead=ans;
        } 
        else{
            ans->right = new TreeNode(root->val);
            ans=ans->right;
        }
        traverse(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        traverse(root);
        return ansHead;
    }
};