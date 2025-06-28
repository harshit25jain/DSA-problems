class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int>charIndex;
        int maxLength=0,left=0;

        for(int right=0;right<s.size();right++){
            if(charIndex.find(s[right]) != charIndex.end()){
                left = max(left,charIndex[s[right]] + 1);
            }
            charIndex[s[right]] = right;
            maxLength = max(maxLength,right - left +1);
        }
        return maxLength;
        
    }
};
/*
I’m using the sliding window approach with a hashmap to track the last seen index of each character. 
As I move the right pointer through the string:

If the character is already in the hashmap and is inside the current window (i.e., its index is ≥ left), 
I move the left pointer just after its previous position — to remove the duplicate.
Then I update the hashmap with the latest index of the character.

I calculate the current window size as right - left + 1, and update the maxLength if this window is bigger than the previous one.
*/
