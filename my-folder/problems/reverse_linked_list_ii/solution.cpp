/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head ; 
        
        // it is important have a pre pointer for case when left==1
        ListNode* pre = new ListNode(0,head) ; 
        int i=0; 
        
        while(i<left-1){
            pre=pre->next ; 
            i++;
        }
        
        ListNode* cur = pre->next ; 
        
        while(i<right-1){
            // we have to declare this "temp" variable because if we break any link without 
            // storing it then the second half part of list will not be accessible
            
            ListNode* temp = pre->next ; 
            pre->next = cur->next ;
            cur->next = cur->next->next ;
            pre->next->next = temp ;
            i++ ; 
        }
        return left==1 ? pre->next : head ;
    }
};