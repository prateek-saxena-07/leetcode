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
      ListNode *ptr=head,*temp;
        
        while(ptr!=NULL)
        {
            r++;
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL)
        {
           if(l>=r)
           {   temp=ptr;
               return ptr;
           }
            l++;
            r--;
            
            ptr=ptr->next;
        }
        return temp;
    }
};