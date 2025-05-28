class Solution {
public:
    bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        // Check if s is already a palindrome
        while (left < right) {
            if (s[left] != s[right]) {
                // If we find a mismatch, we have two options:
                // 1. Skip the character at the left pointer
                // 2. Skip the character at the right pointer
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        
        // If we've reached here, the string is already a palindrome
        return true;
    }
};
