/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false ; 
        ListNode* fast=head ;
        ListNode* slow=head ;
        while(fast && fast->next && slow){
            // cout<<fast->val<<", "<<slow->val<<endl ; 
            fast=fast->next->next ;
            slow=slow->next ; 
            if(fast==slow) break ; 
        }
        if(fast && slow && fast==slow) return true ; 
        return false ; 
    }
};