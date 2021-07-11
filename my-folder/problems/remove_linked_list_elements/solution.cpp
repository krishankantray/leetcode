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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head ; 
        ListNode* pre = new ListNode(0, head) ;
        ListNode* newHead = pre ;
        ListNode* cur = head ;
        while(cur){
            if(cur->val == val){
                pre->next = cur->next ;
                delete(cur) ; 
                cur = pre->next ; 
            }
            else{
                cur=cur->next ; 
                pre=pre->next ; 
            }
        }
        return newHead->next ; 
    }
};