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
}; //the idea is to maintain maxProd: Max product ending at current index and minProd: Min product ending at current index

/*/brute force approach
int maxProduct(vector<int>& nums) {
    int n = nums.size(), result = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int prod = 1;
            for (int k = i; k <= j; ++k) {
                prod *= nums[k];
            }
            result = max(result, prod);
        }
    }
    return result;
}*/
