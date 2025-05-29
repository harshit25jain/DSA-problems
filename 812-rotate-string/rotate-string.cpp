class Solution {
public:
    bool rotateString(string s, string goal) {
    //Concatenation Trick the idea is: if s can become goal via rotation, then goal must be a substring of s + s.
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};
/*brute force approach  bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        
        for (int i = 0; i < s.length(); i++) {
            // rotate left by 1: s = s.substr(1) + s[0]
            s = s.substr(1) + s[0];
            if (s == goal) return true;
        }
        return false;
    } O(n^2) n for rotations × O(n) for each substr()*/
