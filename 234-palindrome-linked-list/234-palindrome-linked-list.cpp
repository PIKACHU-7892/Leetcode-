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
        ListNode* fast = head; 
        ListNode* slow = head; 
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next ;
            
        }
        ListNode* prev = NULL ;
        ListNode* future = slow->next;
        while(slow!=NULL)
        {
            slow->next = prev; 
            prev = slow ; 
            slow = future;
            if(future!=NULL)
            {
                future =  future->next; 
            }
            

        }
        ListNode* start = head;
        while(prev!=NULL)
        {
            if(prev->val != start->val)
            {
                return false;
            }
            start= start->next;
            prev= prev->next;
        }
        return true ;
    }
};