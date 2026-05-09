class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;

        // Step 1: Find total sum of array
        for(int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        // Step 2: Traverse array
        for(int i = 0; i < nums.size(); i++) {

            // Calculate rightSum
            int rightSum = totalSum - leftSum - nums[i];

            // Check if left sum and right sum are equal
            if(leftSum == rightSum) {
                return i;
            }

            // Update left sum
            leftSum += nums[i];
        }

        return -1;
    }
};