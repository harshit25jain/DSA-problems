class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //greedy with sorting TC: O(Nlogn)
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i]; // always pick the first of each sorted pair
        }
        return sum;
    }
};