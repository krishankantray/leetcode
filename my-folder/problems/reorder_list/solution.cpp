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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return ;
        ListNode* fast = head ;
        ListNode* slow = head ;
        ListNode* prev = new ListNode(0, head) ; 
        while(fast && fast->next){
            fast=fast->next->next ;
            slow=slow->next ;
            prev = prev->next ; 
        }
        prev->next = NULL ; 
        ListNode* cur = slow->next ;
        slow->next = NULL ;
        while(cur){
            ListNode* temp = cur->next ;
            cur->next = slow ;
            slow=cur ;
            cur=temp ;
        }
        ListNode* p = head ;
        cur = slow ; 
        
        while(p && cur){
            ListNode* temp = p->next ;
            p->next = cur ;
            cur=cur->next ;
            p->next->next = temp ;
            if(temp==NULL && cur){
                p->next->next = cur ;
            }
            p=temp ; 
        }
    }
};