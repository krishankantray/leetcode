# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        isLoop = False
        while slow and fast and fast.next :
            slow=slow.next
            fast=fast.next.next
            if(slow==fast):
                isLoop=True
                break
        # print (slow.val, fast.val, '\n')
        if not isLoop :
            return None
        slow=head
        # print (slow.val, fast.val)
        while slow != fast:
            slow=slow.next
            fast=fast.next
        return slow