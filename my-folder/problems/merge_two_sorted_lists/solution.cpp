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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL ;
        ListNode* newHead = new ListNode(0) ; 
        ListNode* cpyHead = newHead ; 
        ListNode* p1 = l1 ;
        ListNode* p2 = l2 ;
        while(p1 && p2){
            if(p1->val < p2->val){
                newHead->next = p1 ;
                p1=p1->next ;
            }
            else{
                newHead->next = p2;
                p2=p2->next ;
            }
            newHead=newHead->next ;
        }
        while(p1){
            newHead->next = p1 ;
            p1=p1->next ;
            newHead = newHead->next ;
        }
        while(p2){
            newHead->next = p2 ;
            p2=p2->next ;
            newHead = newHead->next ;
        }
        newHead->next = NULL ;
        return cpyHead->next ; 
    }
};