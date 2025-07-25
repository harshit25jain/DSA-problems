class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //The idea is to use dp with bottom-up strategy
        int n = triangle.size();
        vector<int>dp(triangle.back()); //starting with last row
        for(int i=n-2;i>=0;--i){
            for(int j=0;j<=i;++j){
                dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);
            }
            
        }
        return dp[0];
    }
};
