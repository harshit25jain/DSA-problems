class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
//Sliding window approach 
        vector<int>result;
        if(s.size()<p.size()) return result;

        vector<int>pcount(26,0),scount(26,0);

        //count frequencies for the string 'p'
        for(char c : p){
            pcount[c - 'a']++;
        }
        //Initial window frequency count
        for(int i=0; i<p.size(); i++){
            scount[s[i] - 'a']++;

        }
        //check if initial window is an anagram or not
        if(scount == pcount)
        result.push_back(0);

        //slide the window across 's'
        for(int i=p.size();i<s.size();i++){
            //add the current character to the window
            scount[s[i] - 'a']++;

            //remove the char that is sliding out of window
            scount[s[i-p.size()] - 'a']--;

            //check for an anagram
            if(scount == pcount)
            result.push_back(i-p.size() + 1);
        }
        return result;
    }
};
