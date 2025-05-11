class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n * (n + 1) / 2;
    int Sum = 0;

    for (int num : nums) {
        Sum += num;
    }

    return total - Sum;
        
    }
};