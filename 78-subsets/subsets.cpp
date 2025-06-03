class Solution {
public:
//TC: O(n * 2^n) approach is to apply recursion and backtracking
    void getAllSubsets(vector<int>&nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i==nums.size()){
            allSubsets.push_back(ans);
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allSubsets);
        ans.pop_back(); //backtrack

        //exclude
        getAllSubsets(nums,ans,i+1,allSubsets);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int>ans; //store subsets

        getAllSubsets(nums,ans,0,allSubsets);

        return allSubsets;
    }


};
