class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n-1;
        unordered_set<double>s;
        while(l < r){
            double avg = (nums[l]+nums[r]) / 2.0;
            s.insert(avg);
            l++,r--;

        }
        return s.size();
    }
};
