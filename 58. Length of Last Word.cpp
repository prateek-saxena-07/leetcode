
class Solution {
public:
    int lengthOfLastWord(string s) {
        int space=0,i=0,c=0;
        s=std::regex_replace(s, std::regex("^ +| +$|( ) +"), "$1");  //for removing leading and trailing spaces
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
