class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> a;
        int res=0;
        int l=0,r=0;
        
        
        for(int r=0;r<s.length();r++)
        {
            while(a.find(s[r])!=a.end())    //why if not ⚒ working
            {
                a.erase(s[l]);
                l++;
            }
            a.insert(s[r]);
            
            res=max(res,r-l+1);
            
        }
        return res;
    }
};