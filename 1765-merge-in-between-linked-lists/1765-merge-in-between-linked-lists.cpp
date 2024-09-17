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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
    ListNode* l1=list1;
    ListNode* l2=list2;
    ListNode* p1=nullptr;
    ListNode* p2=nullptr;
    int index=0;
    while(l1!=NULL)
    {   if(index==a-1)
        {
            p1=l1;
        }
        if(index==b)
        {
            p2=l1;
        }
        l1=l1->next;
        index++;
    }


    while(l2->next!=NULL)
    {
        l2=l2->next;
    }

    p1->next=list2;
    l2->next=p2->next;

return list1;

}
};