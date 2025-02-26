class Solution {
public:

    void getAllUniqueSubsets(vector<int>& nums, vector<int>& subset, int index, vector<vector<int>>& allSubsets) {
    allSubsets.push_back(subset); // Add current subset to result

    for (int i = index; i < nums.size(); i++) {
        // Skip duplicate elements
        if (i > index && nums[i] == nums[i - 1]) continue;

        // Include nums[i]
        subset.push_back(nums[i]);

        // Recur for the next index
        getAllUniqueSubsets(nums, subset, i + 1, allSubsets);

        // Backtrack: remove last element
        subset.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    vector<vector<int>> allSubsets;
    vector<int> subset;
    
    // Sort to group duplicates together
    sort(nums.begin(), nums.end());

    // Call backtracking function
    getAllUniqueSubsets(nums, subset, 0, allSubsets);

    return allSubsets;
        
    }
};