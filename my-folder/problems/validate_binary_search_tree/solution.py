# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    val=[]
    def inorder(self, root):
        if root == None:
            return
        self.inorder(root.left)
        self.val.append(root.val)
        self.inorder(root.right)
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        self.val=[]
        self.inorder(root)
        return all(self.val[i] < self.val[i+1] for i in range(len(self.val) - 1))
        