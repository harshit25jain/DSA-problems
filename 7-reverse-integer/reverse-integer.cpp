class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0; 
    while (x != 0) {
        int digit = x % 10; // Extract the last digit

        // Check for overflow before multiplying
        if (reversedNum > INT_MAX / 10 || (reversedNum == INT_MAX / 10 && digit > 7)) {
            return 0; // Overflow case for positive numbers
        }
        if (reversedNum < INT_MIN / 10 || (reversedNum == INT_MIN / 10 && digit < -8)) {
            return 0; // Overflow case for negative numbers
        }

        reversedNum = reversedNum * 10 + digit; // Append the digit
        x /= 10; // Remove the last digit from x
    }
    return reversedNum;  
    }
};
