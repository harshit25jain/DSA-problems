class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size(), i, j;

    // Find the first decreasing element from the right
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            break;
        }
    }

    // If we found a decreasing element, find the next larger element
    if (i >= 0) {
        for (j = n - 1; j > i; j--) {
            if (nums[j] > nums[i]) {
                swap(nums[i], nums[j]); // Swap the elements
                break;
            }
        }
    }

    // Reverse the part after index 'i'
    reverse(nums.begin() + i + 1, nums.end());
}     
};
