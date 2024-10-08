/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var postorderTraversal = function(root) {
       const ans=[];
     function postorder(root)
 {
    if(!root)
    {
        return;
    }

    
    postorder(root.left);
    postorder(root.right);
    ans.push(root.val);
 }
    postorder(root);
    return ans;
};