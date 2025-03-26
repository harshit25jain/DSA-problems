class Solution {
public:
    // Reverse function to reverse a portion of the string in-place
    void reverseStr(string &s, int start, int end) {
        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }

    void trimSpaces(string &s) {
        int n = s.size();
        int left = 0, right = 0;

        while (right < n) {
            while (right < n && s[right] == ' ') right++; // Skip leading spaces
            while (right < n && s[right] != ' ') s[left++] = s[right++]; // Move word
            while (right < n && s[right] == ' ') right++; // Skip extra spaces
            if (right < n) s[left++] = ' '; // Add a single space if more words exist
        }
        s.resize(left); // Resize string to remove extra spaces
    }

    string reverseWords(string s) {
        trimSpaces(s); // Step 1: Trim extra spaces
        reverseStr(s, 0, s.size() - 1); // Step 2: Reverse the entire string

        int n = s.size(), start = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') { // Step 3: Reverse individual words
                reverseStr(s, start, i - 1);
                start = i + 1;
            }
        }
        return s; // Return the modified string
    }
};