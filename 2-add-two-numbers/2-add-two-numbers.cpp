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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0;
        int b = 0;
        int carry = 0;
        int result =0;
        int digit1= 0;
        int digit2 = 0;
        ListNode* l3 = l1;
        ListNode* l4 = l2;
        ListNode * prev1;
        ListNode* prev2;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
            {
                a=0;
                
            }
            else 
            {
                a = l1->val;
            }
            if(l2==NULL)
            {
                b= 0;
            }
            else 
            {
                b = l2->val;
            }
            result = a+b + carry;
            if(result>=10)
            {
                result = result-10;
                carry =1 ;
            }
            else
            {
                carry = 0;
            }
            if(l1!=NULL)
            {
                l1->val = result ;
                prev1 = l1;
                l1=l1->next;
                digit1++;
            }
            if(l2!=NULL)
            {
                  l2->val = result;
                prev2 = l2;
            
            l2=l2->next;
                digit2++;
                
            }
            
          
            
            
        }
        if(digit2>digit1)
        {
            
             if(carry==1)
            {
                
                ListNode* new2 = new ListNode();
                new2->val = carry;
                new2->next=NULL;
                cout<<prev2->val<<endl;
                cout<<new2->val;
                prev2->next = new2;
                
            }
            
            
            return l4;
        }
        else
        {
            if(carry==1)
            {
                
                ListNode* new1 = new ListNode();
                new1->val = carry;
                new1->next=NULL;
                prev1->next = new1;
                
            }
           
            return l3;
        }
    }
};