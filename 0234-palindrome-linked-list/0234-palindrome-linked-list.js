var middle = function(head) 
{   
   
    let slow=head;
    let fast=head;
    while(fast.next!=null && fast.next.next!=null)
    
    {
        fast=fast.next.next;
        slow=slow.next;
    }
    return slow;

};

var reverseList = function(head) 
{   
    let prev=null;
    let curr=head;
    while(curr!=null)
    {
        let fwd=curr.next;  // save the fwd linkedlist to move
        curr.next=prev;  // break old relation and make new relation
        prev=curr;  // movement of prev
        curr=fwd;  // movement of curr
    }    
    return prev;
};
var isPalindrome = function(head) 
{
    let mid=middle(head);
    let secondhead=mid.next;
    mid.next=null;
    let reversehead=reverseList(secondhead);
    while(reversehead!=null)
    {
        if(head.val===reversehead.val)
        {
            head=head.next;
            reversehead=reversehead.next;
        }
        else
        {
            return false;
        }
    }
    return true;
};