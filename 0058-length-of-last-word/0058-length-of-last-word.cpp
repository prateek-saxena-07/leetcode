
class Solution {
public:
    int lengthOfLastWord(string s) {
        int space=0,i=0,c=0;
        s=std::regex_replace(s, std::regex("^ +| +$|( ) +"), "$1");
        while(s[i]!=NULL)
        {
            if(s[i]==' ' && isalpha(s[i+1]))
            {
                space=i;
            }

            i++;
        }
        int j=space+1;
        while(isalpha(s[j]) )
        {
            c++;
            j++;
        }
    if(space==0)
    {
        return s.length();
    }

    return c;
    }
};

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int n = s.size();
//         int ans = 0,k = 0;
//         for(int i=n-1;i>=0;i--){
//             if(s[i] == ' '){
//                 k++;
//             }else break;
//         }

//         for(int i=n-1-k;i>=0;i--){
//             if(isalpha(s[i])) ans++;
//             else break;
//         }
//         return ans;
//     }
// };