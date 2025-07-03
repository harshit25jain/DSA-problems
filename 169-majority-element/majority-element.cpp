class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1, count = 0;

        for(int num: nums){
            if(count == 0){
                candidate = num; //assign new candidate
            }
            count += (num==candidate) ? 1 : -1;
        }
       return candidate; 
    }
};
