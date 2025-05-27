class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixSumCount;
        int prefixSum = 0;
        int ans = 0;
        prefixSumCount[0] = 1;
        for(int num : nums){
            prefixSum += num;
            if(prefixSumCount.find(prefixSum - k) != prefixSumCount.end()){
                ans += prefixSumCount[prefixSum - k];
            }
            prefixSumCount[prefixSum]++;
        }
        return ans;
    }
};