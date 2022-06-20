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
        ListNode* start = head; 
        ListNode* end = head;
        ListNode* final = head;
        for(int i = 0 ;i<n ;i++)
        {
            start = start->next;
        }
        if(start == NULL)
        {
            final = final->next;
        }
        else{
             while(start->next!=NULL)
             {
                 start = start->next;
                 end = end->next;
                 
             }
            end->next = end->next->next;
            
        }
        return final ;
        
    }
};