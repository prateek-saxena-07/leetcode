// class Solution { 
// public:
    
//     bool checkInclusion(string s1, string s2) {
//       string temp;
//         sort(s1.begin(),s1.end());
        
//         for(int i=0;i<=s2.size()-s1.size();i++)
//         {   temp=s2.substr(i,i+s1.size());
//             sort(temp.begin(),temp.end());
//             if(s1==temp)
//             {
//                 return true;
//             }
            
//             temp="";
//         }
//         return false;
//     }
// };
class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        int m[26] = {0}; //character array
        for(char c : s1) m[c - 'a']++;
        int j = 0, i = 0, total_chars = s1.size();
        while(j < s2.size()){
            if(m[s2.at(j++) - 'a']-- > 0)
                total_chars--;
            if(total_chars == 0) return true;
            //shifting of window
            if(j - i == s1.size() && m[s2.at(i++) - 'a']++ >= 0)
                total_chars++;
        }
        return false;
    }
};