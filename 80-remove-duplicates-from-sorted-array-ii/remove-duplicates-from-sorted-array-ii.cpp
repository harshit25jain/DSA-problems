class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //two pointers approach
        int n = nums.size();
        if(n<=2) return n; 

        int i=2; // start from third position
        for(int j=2;j<n;j++){
            if(nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }
      return i;  
    }
};