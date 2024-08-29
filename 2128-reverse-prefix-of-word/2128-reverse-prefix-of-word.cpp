class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=0;
        
        for(int r=0;r<word.length();r++)
        {
            if(word[r]==ch)
            {
                   while(l<=r)
                   {
                    swap(word[l],word[r]);
                    l++;
                    r--;
                   }
                   return word;

            }

        }
        return word;
    }
};