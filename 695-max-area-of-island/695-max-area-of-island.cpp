class Solution {
public:
    int dfs(vector<vector<int>> &grid, int i, int j, int m, int n)
    {
        
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1)
            return 0;
        
        grid[i][j] = 2;
        
        return 1 + dfs(grid, i + 1, j, m, n) + dfs(grid, i - 1, j, m, n) + dfs(grid, i, j + 1, m, n) + dfs(grid, i, j - 1, m, n);
        
    }
        
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int ans = INT_MIN;
        int count = 0;
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1){
                    count = max(count, dfs(grid, i, j, m, n));
                }
            }
        }
        return count;
    }
};