class Solution {
public:
    string reverseWords(string s)
    { int l=0,r;
     
       for(int i=0;i<=s.size();i++)
       {
           if(s[i]==' '||s[i]=='\0')
           {  r=i-1;
              
               while(l<r)
               {
                   swap(s[l],s[r]);
                   l++;
                   r--;
               }
            l=i+1;
               
           }
       }
     return s;
        
    }
};