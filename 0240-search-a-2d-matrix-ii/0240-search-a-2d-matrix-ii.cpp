class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row =matrix.size();
        int column=matrix[0].size();
        int rowidx=0;
        int colidx=column-1;
        while(rowidx<row && colidx>=0)
        {
            if(matrix[rowidx][colidx]==target)
            {
                return true;
            }
            else if(matrix[rowidx][colidx]<target)
            {
                rowidx++;
            }
            else
            colidx--;

        }

        return false;
    }
};