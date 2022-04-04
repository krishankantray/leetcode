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
    ListNode* swapNodes(ListNode* head, int k) {
        int kc=k;
        ListNode* p = head;
        ListNode* q = head;
        kc-=1;
        while(kc--){
            p=p->next;
        }
        ListNode* copy_p = p;
        while(p->next){
            p=p->next;
            q=q->next;
        }
        int val = copy_p->val;
        copy_p->val=q->val;
        q->val = val;
        return head;
    }
};