class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        
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