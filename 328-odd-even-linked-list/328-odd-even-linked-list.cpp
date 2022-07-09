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
    ListNode* oddEvenList(ListNode* head) {
        if(head== NULL )
        {
            return NULL;
        }
        if(head->next== NULL)
        {
            return head;
        }
        ListNode* even = head->next;
        ListNode* even2 = head->next;
        ListNode* odd = head;
        while(even!=NULL && odd!=NULL)
        {
            odd->next = even->next;
            
            if(odd->next!=NULL)
            {
                odd=odd->next;
                even->next = odd->next;
                even = even->next;
            }
            else{
                break;
            }

        }
        odd->next= even2;
        return head;
        
    }
};