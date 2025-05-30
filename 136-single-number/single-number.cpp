class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //the idea is to use xor it will take O(n)TC
    int result = 0;
    for(int num : nums) {
        result ^= num;
    }
    return result;
}
};