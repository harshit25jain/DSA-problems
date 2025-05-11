class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
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