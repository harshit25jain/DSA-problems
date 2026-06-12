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
/*
"I chose a Min Heap because I don't need to sort the entire array to find the kth largest element. 
My goal is to keep track of only the k largest elements seen so far.
The key observation is that if I can maintain the largest k elements at any point during traversal,
then the smallest among those k elements will be the kth largest element overall.
To achieve this, I use a Min Heap. The Min Heap always keeps the smallest element at the top, 
which allows me to efficiently remove elements that are not among the current k largest elements.
As I traverse the array, I insert every element into the Min Heap. If the heap size becomes greater than k,
I remove the smallest element from the heap. This ensures that the heap never stores more than 
k elements and always contains the k largest elements encountered so far.
After processing all elements, the heap contains exactly the k largest elements of the array.
Since it is a Min Heap, the smallest element among these k elements is at the top, 
which is precisely the kth largest element. Therefore, I return the top element of the heap."
"I chose this approach because sorting the entire array would take O(n log n) time,
whereas maintaining a Min Heap of size k gives O(n log k) time complexity, which is more efficient when k is much smaller than n.

*/

/*  BRUTE FORCE APPROACH TC:O(nlogn)
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());  // Sort in ascending order
    return nums[nums.size() - k];    // Return kth from the end
}
*/
