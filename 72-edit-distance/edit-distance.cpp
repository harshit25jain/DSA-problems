class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        // Create DP table
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // Initialize first row and column
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i; // Delete all characters from word1
        }
        for (int j = 0; j <= n; j++) {
            dp[0][j] = j; // Insert all characters from word2
        }
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i-1] == word2[j-1]) {
                    dp[i][j] = dp[i-1][j-1]; // No operation needed
                } else {
                    // Minimum of insert, delete, replace
                    dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
                }
            }
        }
        
        return dp[m][n];
    }
};
/*I created a 2D DP table where dp[i][j] represents the minimum operations needed to convert 
the first i characters of word1 to the first j characters of word2.
If the characters match at position i-1 and j-1, I carry forward the previous diagonal
value (dp[i-1][j-1]) because no operation is needed.

Otherwise, I consider all three operations:
Insert → dp[i][j-1]
Delete → dp[i-1][j]
Replace → dp[i-1][j-1]
and take the minimum among them, then add 1 to account for the current operation.*/
