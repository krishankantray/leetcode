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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head ; 
        int len=1;
        ListNode* p = head ; 
        while(p->next){
            p=p->next ;
            len++ ;
        }
        k=k%len ;
        int i=0;
        ListNode* itr=head ;
        while(i<len-k-1){
            itr=itr->next ; 
            i++ ;
        }
        p->next = head ;
        head = itr->next ;
        itr->next = NULL ; 
        return head ; 
    }
};