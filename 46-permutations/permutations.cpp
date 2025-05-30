class Solution {
public:
        //Use recursive backtracking to build permutations by swapping elements. TC: O(n × n!) SC:O(n!) + O(n)
    void backtrack(vector<vector<int>>& result, vector<int>& nums, int start) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);               // Choose
            backtrack(result, nums, start + 1);       // Explore
            swap(nums[start], nums[i]);               // Un-choose (backtrack)
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(result, nums, 0);
        return result;
    }
};