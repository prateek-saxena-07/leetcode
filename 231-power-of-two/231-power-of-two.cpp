// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         return ((n&(n-1))==0);
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
        
        int bits=__builtin_popcount(n);
        
        if(bits==1)
            return true;
        return false;
    }
};