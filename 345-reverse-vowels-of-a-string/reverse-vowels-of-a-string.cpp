class Solution {
public:
    string reverseVowels(string s) {
        // Two pointers approach
        int i = 0, j = s.length() - 1;
        
        while (i < j) {
            // Check if both characters at i and j are vowels
            bool isVoweli = (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
                            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U');
            
            bool isVowelj = (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
                            s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U');
            
            if (isVoweli && isVowelj) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (isVoweli) {
                j--;
            } else {
                i++;
            }
        }
        
        return s;
    }
};
