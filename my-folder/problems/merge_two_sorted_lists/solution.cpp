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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* ans = new ListNode(0) ;
        ListNode* ans_ptr = ans ;
        
        if(!(l1 || l2)) return NULL ;
        
        while(l1||l2){
            
            int val1 = (l1 ? l1->val : INT_MAX );
            int val2 = (l2 ? l2->val : INT_MAX ) ;
            
            if(val1 <= val2){
                ans_ptr->next = l1 , l1=l1->next ;
            }
            else
                ans_ptr->next = l2, l2=l2->next ;
            
            ans_ptr = ans_ptr->next ;
            
        }
        
        return ans->next ;
        
    }
};