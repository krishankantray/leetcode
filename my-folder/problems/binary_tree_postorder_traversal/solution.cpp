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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode* > s;
        TreeNode* t = root ;
        TreeNode* lr = NULL ; 
        while(true){
            if(t){
                s.push(t) ; 
                t=t->left ; 
            }
            else{
                if(s.empty()) break ;
                TreeNode* temp = s.top() ;
                
                if(temp->right && temp->right != lr) {
                    t=temp->right ;
                }
                else{
                    lr=temp; 
                    v.push_back(temp->val) ; 
                    s.pop();
                }
            }
        }
        return v ; 
    }
};