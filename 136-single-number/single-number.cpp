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
/*TC: O(N) SC:O(N)
The better approach woule be to use hashmap
int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int num : nums) {
        freq[num]++;
    }
    for(auto [key, value] : freq) {
        if(value == 1) return key;
    }
    return -1;
}
*/
