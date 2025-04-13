class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size();
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; ++i) {
        int curr = nums[i];

        int tempMax = max({curr, maxProd * curr, minProd * curr});
        int tempMin = min({curr, maxProd * curr, minProd * curr});

        maxProd = tempMax;
        minProd = tempMin;

        result = max(result, maxProd);
    }

    return result;
    }
};