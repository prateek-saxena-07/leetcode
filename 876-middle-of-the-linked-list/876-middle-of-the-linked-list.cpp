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
    ListNode* middleNode(ListNode* head) {
      int l=1,r=0;  
      ListNode *ptr=head,*ptr1=head,*temp;
        
        while(ptr!=NULL)
        {
            r++;
            ptr=ptr->next;
        }
        cout<<r;
        
       
        while(ptr1!=NULL)
        {
           if(l>=r)
           {   temp=ptr1;
               return ptr1;
           }
            l++;
            r--;
            
            ptr1=ptr1->next;
        }
        return temp;
    }
};