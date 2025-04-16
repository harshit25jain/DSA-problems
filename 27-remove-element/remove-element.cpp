class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //The idea is to swap with last ele and shrink the size
        int i=0, n=nums.size();

        while(i<n){
            if(nums[i] == val){
                nums[i] = nums[n-1]; // swap with the last element
                n--; //shrink the size
            }else{
                i++;
            }
        }
        return n; // new length
    }
};