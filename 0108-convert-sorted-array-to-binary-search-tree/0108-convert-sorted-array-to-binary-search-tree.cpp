class Solution {
public:
    TreeNode* maker(vector<int>& v, int low , int high){
        if(low > high){
            return{};
        }
        if(low<=high){
        int mid = low +(high-low)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = maker(v,low,mid-1);
        root->right = maker(v,mid+1,high);
        return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return maker(nums,0,n-1);
    }
};