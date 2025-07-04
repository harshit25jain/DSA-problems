class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        //TWO POINTER APPROACH
        vector<vector<int>>result;
        int n = nums.size();

        if(n<4) return result;

        sort(nums.begin(),nums.end());

        for(int i = 0; i<n-3; i++){

                if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate i

        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicate j

            int left = j + 1, right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    
                    // Skip duplicate left and right
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++; // Increase sum
                } 
                else {
                    right--; // Decrease sum
                }
            }
        }
    }
    return result;
}
        
    
};