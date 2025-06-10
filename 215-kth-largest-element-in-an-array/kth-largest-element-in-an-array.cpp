class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) { //TC:O(NLogk)
        
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num);            // Add element
        if (minHeap.size() > k) {
            minHeap.pop();            // Keep heap size = k
        }
    }
    return minHeap.top();             // kth largest
    }
};

/*  BRUTE FORCE APPROACH TC:O(nlogn)
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());  // Sort in ascending order
    return nums[nums.size() - k];    // Return kth from the end
}
*/
