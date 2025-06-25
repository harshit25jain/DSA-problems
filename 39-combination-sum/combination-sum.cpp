class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& current, int index) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (target < 0) return;

        for (int i = index; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], result, current, i); // i → can reuse same
            current.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, result, current, 0);
        return result;
    }
};
/*
I use backtracking to explore all combinations starting from a given index.
At each step, I try to include each candidate (starting from index to allow reuse) 
and recurse with target - candidate. 
I backtrack by popping the element from the current list.
When target == 0, I’ve found a valid combination.
*/
