class Solution {
public:

//SORTING + 2POINTER APPROACH
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        for(int i=0; i<n-2; i++){
            int left = i+1;
            int right = nums.size()-1;

            while(left < right){
                int currentSum = nums[i] + nums[left] + nums[right];

                if(abs(target - currentSum) < abs(target-closestSum)){
                    closestSum = currentSum;
                }
                if(currentSum < target){
                    left++;
                }else if(currentSum > target){
                    right--;
                }else{
                    return currentSum;
                }
            }
        }
     return closestSum;   
    }
};
