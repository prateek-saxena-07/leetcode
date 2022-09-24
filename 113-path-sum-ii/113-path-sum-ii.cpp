/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
        vector<vector<int>> ans;
        vector<int> path;
        void dfs(TreeNode* root, int targetSum){
            if(root!=nullptr){
                path.push_back(root->val);
                if(root->left != nullptr){
                    dfs(root->left, targetSum-root->val);
                }
                if(root->right != nullptr){
                    dfs(root->right, targetSum-root->val);
                }
                if (root->left==nullptr && root->right ==nullptr && root->val == targetSum){
                    ans.push_back(path);
                }
                path.pop_back(); // back tracking to accelerate
            } 
        }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};;