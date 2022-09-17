// class Solution {
// public:
//     bool isPalindrome(string s) {
//         unordered_map <char,int> pal;
//         int c=0;
//         string S=s;
//         if(S.length()==0)
//             return true;
//         transform(S.begin(),S.end(),S.begin(),::tolower);
//         for(int i=0;i<S.length();i++)
//         {        if ((S[i] >= 'A' && S[i] <= 'Z') ||(S[i] >='a' && S[i] <= 'z'||S[i]>=48 && S[i]<=57))
//                     pal[S[i]]++;
            
//         }
//         for(auto x:pal)
//         {  
//             if(x.second%2!=0)
//                 c++;
//         }
//         cout<<c;
//         cout<<pal.size();
//         if(c>1)
//         {return false;
//         }
        
//         return true;
//     }
// };


class Solution {
public:
    bool isPalindrome(string s) {
        //get size of string, initialize left pointer to 0
        //initialize right pointer to length-1 since strings
        //use 0-based indexing
        int len = s.size();
        int l {0};
        int r {len - 1};
        
        //while left pointer < right pointer (e.g. we haven't crossed pointers)
            //increment left pointer until it's at the first alphanumeric character
            //decrement right point until it's at first alphanumeric character
            //if the values are non-equal then its not a palindrome
            //increment left pointer by 1 and right by -1
        
        while (l < r)
        {
            while (l < r and !isalnum(s[l]))
            {
                l++;
            }
            while (l < r and !isalnum(s[r]))
            {
                r--;
            }
            
            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l += 1;
            r -= 1;
        }
        // return true is the default behavior since we crossed pointers
        //and we didnt have any inconsistencies when checking tolower()
        return true;
    }
};