class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0,right = nums.size()-1;
        while(left<right){
            int mid = left + (right-left)/2;

            if(nums[mid] > nums[mid+1]){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
      return left;  
    }
};
/*
"I used Binary Search because I don't need the maximum element; I only need any peak element. 
The key observation is that by comparing nums[mid] and nums[mid+1], 
I can determine the direction of the slope.
If nums[mid] > nums[mid+1], the slope is decreasing. 
This means we are either standing on a peak or have 
already crossed one, so a peak must exist at mid or somewhere on the left side.
Therefore, I keep the left half by setting right = mid.
If nums[mid] < nums[mid+1], the slope is increasing.
This means a higher value exists on the right, so we haven't reached a peak yet.
Therefore, a peak must exist somewhere on the right side, and I set left = mid + 1.
In every iteration, I eliminate half of the search space while ensuring that 
at least one peak remains within the search range. 
Eventually, left and right converge to the same index, which is the peak element.
The time complexity is O(log n) and the space complexity is O(1).
*/
