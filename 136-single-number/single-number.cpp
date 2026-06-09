class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //the idea is to use xor it will take O(n)TC
       // XOR of two identical numbers is 0 and XOR with 0 returns the same number
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
