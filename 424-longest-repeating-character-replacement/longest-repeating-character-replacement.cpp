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