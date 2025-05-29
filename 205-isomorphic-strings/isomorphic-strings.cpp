class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) return false;

    unordered_map<char, char> mapping;
    unordered_set<char> used;

    for(int i = 0; i < s.length(); ++i) {
        char c1 = s[i], c2 = t[i];

        if(mapping.count(c1)) {
            if(mapping[c1] != c2) return false;
        } else {
            if(used.count(c2)) return false; // already mapped
            mapping[c1] = c2;
            used.insert(c2);
        }
    }

    return true;
}
};