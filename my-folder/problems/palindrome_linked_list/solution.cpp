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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true ; 
        ListNode* fast = head ; 
        ListNode* slow = head;  
        ListNode* prev = new ListNode(0, head) ; 
        while(fast && fast->next ) { 
            fast = fast->next->next ; 
            slow = slow->next ; 
            prev=prev->next ;
        }
        prev->next=NULL ; 
        ListNode* cur = slow->next ;  ; 
        while(cur){
            ListNode* temp = cur->next ;
            cur->next = slow;
            slow = cur ; 
            cur = temp ; 
        }
         
        ListNode* pt = head; 
        while(slow && pt){
            //cout<<pt->val<<", "<<slow->val<<endl; 
            if(slow->val != pt->val){
                return false ; 
            }
            slow=slow->next;
            pt = pt->next ; 
        }
        if(!slow || !pt) return true ; 
        return false ; 
    }
};