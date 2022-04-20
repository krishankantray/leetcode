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
class BSTIterator {
private:    
    stack<TreeNode*> node_stack;
public:
    BSTIterator(TreeNode *root) {
        while(root) 
        {
            node_stack.push(root);
            root = root->left;
        }
    }

    bool hasNext() {
        return !node_stack.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *t = node_stack.top();
        node_stack.pop();
        int ret = t->val;
        t = t->right;
        while(t)
        {
            node_stack.push(t);
            t = t->left;
        }
        return ret;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */