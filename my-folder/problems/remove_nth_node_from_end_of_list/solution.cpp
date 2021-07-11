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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL ; 
        ListNode* f = head ;
        ListNode* b = new ListNode(0, head) ;
        ListNode* newHead = b ;
        while(n && f){
            f=f->next ;
            n-- ;
        }
        // if(!f) return head->next ; 
        while(f){
            f=f->next;
            b=b->next;
        }
        b->next=b->next->next ; 
        return newHead->next ; 
    }
};