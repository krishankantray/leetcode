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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> >res;
        if(!root){
            return res; 
        } 
        queue<TreeNode* > q ;
        TreeNode* node = root ;
        q.push(root); 
        while(!q.empty()){
            int sz = q.size();
            vector<int>tArr;
            while(sz--){
                node = q.front(); 
                q.pop();
                tArr.push_back(node->val) ; 
                if(node->left){
                    q.push(node->left) ;
                }
                if(node->right){
                    q.push(node->right) ; 
                }
            }
            res.push_back(tArr) ; 
        }
        return res; 
    }
};