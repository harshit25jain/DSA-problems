class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1)); // Initialize 2D DP table with 1s
    // Fill the DP table
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
    }
};
/*
- Create a 2D DP table where dp[i][j] represents the number of unique paths to reach
position (i,j)
- Initialize the first row and first column with 1s since there's only one way to reach any
cell in the first row (by moving right) or first column (by moving down)
- For other cells, the number of ways to reach a cell is the sum of ways to reach the cell
above it and the cell to its left
- The formula is: dp[i][j] = dp[i-1][j] + dp[i][j-1]
*/
