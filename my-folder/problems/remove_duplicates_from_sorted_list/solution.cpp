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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head ; 
        ListNode* f = head->next ;
        ListNode* b = head ; 
        while(f){
            if(f->val == b->val){
                while(f && f->val == b->val) f=f->next ; 
                b->next = f ; 
            }
            else{
                b=b->next ; 
                f=f->next ; 
            }
        }
        return head ; 
    }
};