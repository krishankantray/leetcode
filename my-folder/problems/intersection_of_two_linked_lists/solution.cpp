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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL ;
        int lenA=0, lenB=0 ;
        ListNode* p = headA ;
        while(p){
            p=p->next ;
            lenA++ ;
        }
        p=headB ;
        while(p){
            p=p->next ;
            lenB++; 
        }
        p=headA ;
        ListNode* q = headB ;
        if(lenA>lenB){
            while(lenA>lenB) {
                p=p->next ;
                lenA-- ;
            }
        }
        if(lenB>lenA){
            while(lenB>lenA){
                q=q->next ;
                lenB-- ;
            }
        }
        if(p==q) return p ; 
        while(p && q && p!=q){
            p=p->next;
            q=q->next ;
            if(p==q) return p ;
        }
        return NULL ; 
    }
};