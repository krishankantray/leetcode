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
        vector<int>v;
        TreeNode* t = root ;
        stack<TreeNode*>s;
        while(true){
            if(t){
                v.push_back(t->val);
                s.push(t);
                t=t->left ; 
            }
            else{
                if(s.empty()) break; 
                t=s.top();
                s.pop();
                t=t->right ;
            }
        }
        return v; 
    }
};