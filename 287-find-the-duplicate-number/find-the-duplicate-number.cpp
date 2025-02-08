class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect cycle
    do {
        slow = nums[slow];    // Move slow by 1 step
        fast = nums[nums[fast]]; // Move fast by 2 steps
    } while (slow != fast);

    // Phase 2: Find cycle entrance (duplicate)
    slow = nums[0]; // Reset slow to the start
    while (slow != fast) {
        slow = nums[slow];  // Move 1 step
        fast = nums[fast];  // Move 1 step
    }

    return slow; // The duplicate number
}
        
    
};