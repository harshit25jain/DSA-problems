class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int>count(26,0); //store frequency of each char
        int max_freq = 0;
        int left=0;//left pointer of window
        int max_length = 0;

        for(int right=0;right<s.length();right++){
            count[s[right] - 'A']++;
            max_freq = max(max_freq,count[s[right] - 'A']);

            //current window size is (right-left+1)
            if( (right-left+1) - max_freq > k ){
                count[s[left] - 'A']--;
                left++;
            }
            max_length = max(max_length,right-left+1);
        }
      return max_length;  
    }
};
/*
I used the sliding window technique. At every step, I try to maintain the longest window
where at most k characters need to be replaced to make all characters same.

I keep a frequency array of size 26 to track characters in the current window.
I also track the most frequent character’s count.

If the current window needs more than k replacements, I shrink the window from the left.

At each step, I update the max_length of valid windows.

The reason this works efficiently is because we never recalculate the whole frequency
or recheck the entire window — it's optimized to run in linear time.
*/
