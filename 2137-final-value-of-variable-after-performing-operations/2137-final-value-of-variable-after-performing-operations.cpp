class Solution {
public:
    int finalValueAfterOperations(vector<string>& operation) {
        int p=0,n=0;
        for(int i=0;i<operation.size();i++)
        {
            if(operation[i]=="X++" ||operation[i]=="++X")
            {
                p++;
            }
            else
            {
                n++;
            }
        }

        return p-n;
    }
};