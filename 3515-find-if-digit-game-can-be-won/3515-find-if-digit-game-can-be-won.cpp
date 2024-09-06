class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int dc=0,db=0,sd=0;

            for(int i=0;i<nums.size();i++)
            {   int temp=nums[i];
                while(temp!=0)
                {
                    temp=temp/10;
                    dc++;
                }
                if(dc>1)
                {
                    db+=nums[i];
                }
               else{
                 sd+=nums[i];
               }

                dc=0;
            }
cout<<db<<sd;
            if(db==sd)
            {
                return false;
            }


            return true;


    }
};