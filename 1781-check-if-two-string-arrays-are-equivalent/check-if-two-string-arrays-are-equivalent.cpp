class Solution {
public: //The idea is to declare two strings s1 and s2 to store con srings of word1 & 2
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //TC:O(N+M) SC:O(N+M)
        string s1 = ""; //stores concatenated string of word1
        string s2 = ""; //stores concatenated string of word2
        
        // Concatenate all strings in word1
        for (const string& s : word1) {
            s1 += s;
        }
        
        // Concatenate all strings in word2
        for (const string& s : word2) {
            s2 += s;
        }
        
        // Compare the two resulting strings
        return s1 == s2;
    }
};
/*APPROACH:2 TWO POINTER APPROACH  TC:O(N+M) SC:O(1)
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int arr1 = 0, arr2 = 0;    // Current array index
        int char1 = 0, char2 = 0;  // Current character index
        
        while (arr1 < word1.size() && arr2 < word2.size()) {
            // If we've reached the end of the current string in word1, move to the next string
            if (char1 == word1[arr1].size()) {
                arr1++;
                char1 = 0;
                continue;
            }
            
            // If we've reached the end of the current string in word2, move to the next string
            if (char2 == word2[arr2].size()) {
                arr2++;
                char2 = 0;
                continue;
            }
            
            // Compare current characters
            if (word1[arr1][char1] != word2[arr2][char2]) {
                return false;
            }
            
            // Move to next characters
            char1++;
            char2++;
        }
        
        // Check if we've fully traversed both arrays
        return arr1 == word1.size() && char1 == 0 && 
               arr2 == word2.size() && char2 == 0;
    }
};

*/
