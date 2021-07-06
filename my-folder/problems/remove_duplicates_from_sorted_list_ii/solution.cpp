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
        if(!head || !head->next) return head ; 
        ListNode* run = head->next ; 
        if(run && run->val==head->val){
            while(run && run->val==head->val) run=run->next ; 
            return deleteDuplicates(run) ; 
        }
        head->next=deleteDuplicates(run);
        return head ; 
    }
};