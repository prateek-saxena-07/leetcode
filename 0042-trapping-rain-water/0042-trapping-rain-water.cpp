class Solution { // 4 ms, faster than 89.31%
public:
    int trap(vector<int>& a) {
        int n = a.size();
        int leftMax[n], rightMax[n];
        leftMax[0]=a[0];
        cout<<leftMax[0]<<" ";
        for (int i = 1; i < n; ++i) 
            {leftMax[i] = max(a[i], leftMax[i-1]);
            cout<<leftMax[i]<<" ";}
cout<<endl;
            rightMax[n-1]=a[n-1];
        for (int i = n-2; i >= 0; --i) 
            {rightMax[i] = max(a[i], rightMax[i+1]);
            cout<<rightMax[i]<<" ";}
        cout<<rightMax[n-1];
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans=ans+(min(leftMax[i],rightMax[i])-a[i]);
        }
        return ans;
    }
};