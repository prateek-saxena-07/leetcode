class Solution {
public:
    string defangIPaddr(string address) {
          string result;

          for(int i=0;address[i]!='\0';i++)
          {
            if(address[i]=='.')
            {
                result+="[.]";
            }
            else
            {
                result+=address[i];
            }
          }

          return result;
    }
};