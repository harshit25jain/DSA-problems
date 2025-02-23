class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp; //it stores num and its index

        for(int i=0;i<nums.size();i++){
            int complement = target-nums[i]; //find complement

            //if complement exits in the map,return indices
            if(mp.find(complement) != mp.end()){
                return {mp[complement], i};
            }
            //stores curr num with index
            mp[nums[i]] = i;
        }
        return {};
    }
};