class Solution {
public:
    int findComplement(int num) {
        int mod=0;
        vector <int> bin;
        int ans=0;

        while(num>0)
        {
            mod=num%2;
            bin.push_back(mod);
            num=num/2;
            
        }

        

        for(int i=0;i<bin.size();i++)
        {
            
            if(bin[i]==0)
            {
                bin[i]=1;
            }
            else
            {
                bin[i]=0;
            }

        }

        for(int i=0;i<bin.size();i++)
        {  
                ans=ans+(pow(2,i)*bin[i]);
        }

        return ans;
    }
};