class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Edge case: 1 is not a perfect number
        if (num <= 1) return false;
        
        int sum = 0;
        // Check all potential divisors from 1 to num-1
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        
        return sum == num;
    }
};