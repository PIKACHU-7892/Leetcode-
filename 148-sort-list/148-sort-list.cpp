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
    ListNode* merger(ListNode* left , ListNode*right)
    {   
        ListNode* final;
        if(left->val > right->val)
        {
            final = right;
            right  = right->next;
        }
        else
        {
            final = left;
            left= left->next;
        }
        ListNode* final2= final;
        while(left!=NULL && right!=NULL)
        {
            if(left->val<right->val)
            {
                final->next = left;
                left= left->next; 
                final=final->next;
            }
            else
            {
               final->next = right;
                right = right->next;
                final = final->next;
            }

        }
        if(left==NULL)
        {
            final->next= right;
        }
        else if(right==NULL)
        {
            final->next = left;
        }
        
        return final2;
    }
    ListNode* getMiddle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next ;
        while(fast!=NULL && fast->next!=NULL )
        {
fast = fast->next->next;
            slow = slow->next;
            
        }
        return slow; 
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* left  = head; 
        ListNode* right = getMiddle(head);
        ListNode* temp = right->next;
        right->next =  NULL;
        right = temp;
        left = sortList(left);
        right = sortList(right);
        ListNode* final = merger(left,right);
        ListNode*final2 = final;
       
        return final2;
    }
};