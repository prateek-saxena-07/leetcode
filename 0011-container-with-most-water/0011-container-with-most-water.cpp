class Solution {
public:
    int maxArea(vector<int>& height) {
    int l=0,r=height.size()-1;
   int maxarea=0;

    while(l<r)
    { int width=r-l;
        maxarea=max(maxarea,min(height[l],height[r])*width);

        if(height[l]<=height[r])
            l++;
        else
        r--;

    }

    return maxarea;
    }
};