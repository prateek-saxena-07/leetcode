class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> result;
    int m = grid.size();
    int n = grid[0].size();
    bool leftToRight = true;

    for (int i = 0; i < m; i++) {
        if (leftToRight) {
            // Traverse from left to right
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2 == 0) { // Skip every alternate cell
                    result.push_back(grid[i][j]);
                }
            }
        } else {
            // Traverse from right to left
            for (int j = n - 1; j >= 0; j--) {
                if ((i + j) % 2 == 0) { // Skip every alternate cell
                    result.push_back(grid[i][j]);
                }
            }
        }
        leftToRight = !leftToRight; // Flip direction
    }

    return result;
    }
};