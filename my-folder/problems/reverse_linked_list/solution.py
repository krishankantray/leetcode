# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def recur(self, head, prev):
        if head == None:
            return prev
        tmp = head.next
        head.next = prev
        return self.recur(tmp, head)

    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        return self.recur(head, None)
        
        