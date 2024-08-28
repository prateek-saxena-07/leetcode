class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        int mod;
       
        while(n>0)
        {
            mod=n%10;
            sum=sum+mod;
            prod=prod*mod;
            n=n/10;

        }

        return prod-sum;
    }
};