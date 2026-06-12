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
"I used a HashMap because it allows me to find the required complement in constant time. 
Instead of checking all pairs with O(n²) complexity, I store previously visited elements in a HashMap. 
For each element, I calculate target - nums[i] and check if it already exists in the map.
If it does, I've found the answer; otherwise, I store the current element. 
This gives an optimal O(n) time complexity with O(n) extra space. */



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


