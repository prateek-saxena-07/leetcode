// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         reverse(s.begin(),s.end());
//     }
// };//function

//recursion 1
// class Solution {
// public:
    
//     vector<char> s1;
//     void reverseString(vector<char>& s) {
//        int n=s.size();
//         revers(s,0,n);
        
//         swap(s,s1);
//     }
    
//      void revers(vector<char>& s,int index,int size)
//        {
//            if(index== size)
//            {
//                return;
//            }
           
//            char temp=s[index];
//            revers(s,index+1,size);
//            s1.push_back(temp);
//        }
// };


class Solution {
public:
    
    
    void reverseString(vector<char>& s) 
    {  
      int l=0,r=s.size()-1;
        while(l<r)
        {
            swap(s[l],s[r]);
            l++;
            r--;
        }
        
    }
    
    
};