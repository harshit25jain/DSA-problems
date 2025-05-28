class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0, high = nums.size() - 1;

        while(low<=high){
            int mid = low + (high-low)/2; //avoids overflow

            if(nums[mid] == target)return mid; //target found

            //Determine which half is sorted

            if(nums[low] <= nums[mid]){ //left half is sorted
            if(nums[low] <= target && target < nums[mid]){ //target is in the left half
            high = mid-1;
            }
            else{ //search in the right half
            low = mid+1;
            }}
            else{//right half is sorted
            if(nums[mid] < target && target <= nums[high]){ //target is in the right half
            low = mid+1;
            }
            else{//search in the left half
                high = mid-1;
            }
            }

        }
        return -1; //target not found
        
    }
};