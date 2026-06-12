class Solution {
public:
    int findMin(vector<int>& nums) {

        int left=0,right = nums.size()-1;
        
        while(left < right){
            int mid = left + (right-left)/2;

            if(nums[mid] > nums[right]){
                left = mid+1; // mid is in the right half
            }
            else{

                right = mid; //mid is in the left half
            }

        }
     return nums[left];   
    }
};
/*
I used Binary Search because the array is sorted but rotated.
The key observation is that the minimum element is the point where the rotation occurs. 
If I can determine which half contains the rotation point, I can safely discard the other half.
To do this, I compare nums[mid] with nums[right]. 
The element at right helps me identify which side of the array is properly sorted and which side contains the rotation point.

If nums[mid] > nums[right], it means mid lies in the larger sorted portion of the array, 
and the minimum element must be somewhere to the right of mid. Therefore, I move left to mid + 1.
Otherwise, if nums[mid] <= nums[right], it means the right half is 
sorted and the minimum element could be at mid itself or somewhere to its left. 
Therefore, I keep mid in the search space by setting right = mid.
I continue shrinking the search space until left and right meet. 
At that point, they point directly to the minimum element, which I return." 
*/
