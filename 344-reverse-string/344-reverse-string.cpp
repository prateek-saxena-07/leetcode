class Solution {
public:
    
    vector<char> s1;
    void reverseString(vector<char>& s) {
       int n=s.size();
        revers(s,0,n);
        
        swap(s,s1);
    }
    
     void revers(vector<char>& s,int index,int size)
       {
           if(index== size)
           {
               return;
           }
           
           
           revers(s,index+1,size);
           s1.push_back(s[index]);
       }
};