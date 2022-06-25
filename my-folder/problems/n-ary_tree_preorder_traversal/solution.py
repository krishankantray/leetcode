"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    ans=[]
    def recur(self, root):
        if root == None:
            return self.ans
        self.ans.append(root.val)
        for i in range(0, len(root.children)):
            self.recur(root.children[i])
        return self.ans
    def preorder(self, root: 'Node') -> List[int]:
        self.ans=[]
        self.recur(root)
        return self.ans