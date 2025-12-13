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
/*C# Code 

using System.Collections.Generic;

public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {
        Dictionary<int, int> map = new Dictionary<int, int>(); // stores num and its index

        for (int i = 0; i < nums.Length; i++)
        {
            int complement = target - nums[i]; // find complement

            // if complement exists in the map, return indices
            if (map.ContainsKey(complement))
            {
                return new int[] { map[complement], i };
            }

            // store current number with index
            map[nums[i]] = i;
        }

        return new int[0];
    }
}

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


