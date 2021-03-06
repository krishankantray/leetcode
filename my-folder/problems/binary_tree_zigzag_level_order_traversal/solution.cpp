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
        vector<vector<int> > res ; 
        if(!root) return res ; 
        queue<TreeNode*> q ;
        q.push(root) ;
        bool flag = true ;
        while(!q.empty()){
            vector<int>temp ; 
            
            int sz = q.size() ;
            while(sz--){
                TreeNode* node = q.front() ;
                q.pop() ;
                temp.push_back(node->val) ;
                if(node->left) q.push(node->left) ;
                if(node->right) q.push(node->right) ; 
            }
            if(!flag) reverse(temp.begin(), temp.end()) ; 
            flag = !flag ;
            res.push_back(temp) ; 
        }
        return res ; 
    }
};