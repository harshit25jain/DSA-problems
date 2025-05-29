class Solution {
public:
    bool rotateString(string s, string goal) {
    //Concatenation Trick the idea is: if s can become goal via rotation, then goal must be a substring of s + s.
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};