class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> set;
        for (int i = 0; i < nums.size() - 1; ++i) {
            int sum = nums[i] + nums[i + 1];
            if (set.count(sum)) {
                return true;
            }
            set.insert(sum);
        }
        return false;
    }
};
