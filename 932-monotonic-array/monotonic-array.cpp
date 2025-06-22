class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        //one directional flag
         int n = nums.size();
        if (n <= 2) return true;

        int direction = 0; // 0 = not decided, 1 = increasing, -1 = decreasing
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) continue;
            int currDir = (nums[i] > nums[i - 1]) ? 1 : -1;
            if (direction == 0) {
                direction = currDir;
            } else if (direction != currDir) {
                return false;
            }
        }
        return true;
 }
};
    /*
    class Solution {
public: //brute force approach
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) increasing = false;
            if (nums[i] > nums[i - 1]) decreasing = false;
        }
        return increasing || decreasing;
    }
};

    */   
