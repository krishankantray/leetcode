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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        s.push(root);
        vector<int>ans;
        while(!s.empty()){
        	TreeNode* cur=s.top();
        	s.pop();
        	if(!cur) continue; 
        	ans.push_back(cur->val);
        	s.push(cur->right); // first push right because in Stack LIFO works
            s.push(cur->left);
        }
        return ans;
    }
};