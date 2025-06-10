class Solution {
public:
    void reverse(vector<int>& nums,int start,int end){
        while(start<=end){
            swap(nums[start],nums[end]);
            start++,end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k % n; //handle cases where k>n
        reverse(nums,0,n-1); //reverse entire array
        reverse(nums,0,k-1); //reverse first k elements
        reverse(nums,k,n-1); //reverse n-k elements
        
    }
};
