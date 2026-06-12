class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
        return false;

        int count[26] = {0};

        for(int i =0; i<s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int i=0; i<26; i++){
            if(count[i] != 0 )
            return false;
        }
        return true;      
    }
};
/*
The key observation is that anagrams must have identical character frequencies.
I first check whether the lengths are equal because unequal lengths can never form anagrams. 
Then I use a frequency array of size 26 to track character counts. While traversing both strings,
I increment the count for characters in the first string and decrement for characters in the second string.
If the strings are true anagrams, all frequency differences cancel out, leaving every count as zero. 
This gives an O(n) solution and avoids the O(n log n) cost of sorting. */
