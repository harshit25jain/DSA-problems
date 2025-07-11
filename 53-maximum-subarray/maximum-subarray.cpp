class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN,currentSum = 0;

        for(int num : nums){
            currentSum = max(num,currentSum + num);
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};