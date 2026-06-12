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

"The problem asks for two numbers whose sum equals the target. 
The observation is that if the current number is x, then I only need to find target - x. 
To find this efficiently, I chose a HashMap because it provides O(1) average lookup time. 
While traversing the array, I check if the complement already exists in the map.
If yes, I return the indices; otherwise, I store the current number. 
it gives an O(n) TC as we are traversing the array once."
 */



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


