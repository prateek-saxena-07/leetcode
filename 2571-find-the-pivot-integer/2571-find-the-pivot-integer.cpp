class Solution {
public:
    int pivotInteger(int n) {
        int sum1=0;
        int total=((n*(n+1))/2);
        int sum2=0;
        

        for(int i=1;i<=n;i++)
        {
            sum1+=i;

            sum2=total+i-sum1;
        
            if(sum1==sum2)
            {
                return i;
            }

        }

        return -1;
    }
};