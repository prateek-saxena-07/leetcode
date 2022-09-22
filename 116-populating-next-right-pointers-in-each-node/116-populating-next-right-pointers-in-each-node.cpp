/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void helper(Node *root)
    {
        if(root == NULL)
            return;
        if(root -> left == NULL)
            return;
        Node *currLevel = root;
        Node *nextLevel = root -> left;
        nextLevel -> next = root -> right;
        
        if(currLevel-> next)
        {
            currLevel -> right -> next = currLevel -> next -> left;
        }
        helper(root -> left);
        helper(root -> right);
        
    }
    Node* connect(Node* root) {
        helper(root);
        return root;
    }
};