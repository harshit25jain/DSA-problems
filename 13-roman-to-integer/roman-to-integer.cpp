class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        
        for (int i = 0; i < s.length(); i++) {
            // If current value is less than next value, subtract current value
            if (i + 1 < s.length() && values[s[i]] < values[s[i+1]]) {
                result -= values[s[i]];
            } else {
                // Otherwise add current value
                result += values[s[i]];
            }
        }
        
        return result;
    }
};