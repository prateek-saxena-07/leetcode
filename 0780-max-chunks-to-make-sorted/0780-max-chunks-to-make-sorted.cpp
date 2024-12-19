class Solution {
public:
    int maxChunksToSorted(vector<int>& c) {
        int pipe=0;
    int m=INT_MIN;

     for(int i=0;i<c.size();i++)
    {
        m=max(c[i],m);

        if(m==i)
        {
            pipe++;
        }
    }
    return pipe;
    }
};