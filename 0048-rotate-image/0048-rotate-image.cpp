class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transposing a matrix to get flipped matrix of the solution 
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //then flipping the transposed matrix to get the solution :)
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};