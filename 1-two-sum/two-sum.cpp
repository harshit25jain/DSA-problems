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
/*
public int[] twoSum(int[] nums, int target) {
    Map<Integer,Integer> idx = new HashMap<>();
    for (int i=0;i<nums.length;i++){
        int comp = target - nums[i];
        if (idx.containsKey(comp)) return new int[]{idx.get(comp), i};
        idx.put(nums[i], i);
    }
    return new int[]{-1,-1};
}
*/


