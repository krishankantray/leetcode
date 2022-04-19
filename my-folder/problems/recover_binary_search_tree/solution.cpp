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
    void traverse(TreeNode* root, vector<int>&vec){
        if(!root) return ;
        traverse(root->left, vec);
        vec.push_back(root->val);
        traverse(root->right, vec);
    }
    void fixTree(TreeNode* root, vector<int>&vec, int &i){
        if(!root) return;
        fixTree(root->left, vec, i);
        root->val = vec[i];
        i++;
        fixTree(root->right, vec, i);
    }
    void recoverTree(TreeNode* root) {
        vector<int>inorder_tree;
        traverse(root, inorder_tree);
        sort(inorder_tree.begin(), inorder_tree.end());
        int i=0;
        fixTree(root, inorder_tree,i);
    }
};