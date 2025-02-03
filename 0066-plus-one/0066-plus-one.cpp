class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        

        
        reverse(digits.begin(),digits.end());


        digits[0]=digits[0]+1;
        if(digits[0]>9)
        {   digits[0]=digits[0]%10;
            carry=1;
        }
        for(int i=1;i<digits.size();i++)
        {
            if(carry==1)
            {    carry=0;
                digits[i]=digits[i]+1;
                     if(digits[i]>9)
                     {
                         digits[i]=digits[i]%10;
                         carry=1;
                     }
            }
            

        }

        if(carry)
        {
            digits.push_back(1);
        }
        
        reverse(digits.begin(),digits.end());

        return digits;
    }
};