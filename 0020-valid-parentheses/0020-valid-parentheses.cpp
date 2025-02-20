class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(int i=0;i<s.length();i++)
       {    char ch=s[i];
           if(s[i]=='{'||s[i]=='['||s[i]=='(')
           {
               st.push(s[i]);
           }

           else{
               if(st.empty()==true)
                    {return false;}
               char top=st.top();

               if((top=='(' && ch==')')||(top=='[' && ch==']')||(top=='{' && ch=='}'))
               {st.pop();}

               else
               {
               return false;
               } 
           }
       }
       if(st.empty()==true)
        return true;

    else    
        return false;
    }
};