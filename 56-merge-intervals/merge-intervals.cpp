class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n = intervals.size();
    if (n <= 1) return intervals;

    // Step 1: Sort intervals based on start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    
    // Step 2: Merge overlapping intervals
    merged.push_back(intervals[0]); // Start with the first interval

    for (int i = 1; i < n; i++) {
        if (merged.back()[1] >= intervals[i][0]) {
            // Overlapping case: merge intervals
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            // Non-overlapping case: add the new interval
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}
    
};