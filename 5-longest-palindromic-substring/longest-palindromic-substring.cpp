class Solution {
public:
//TWO POINTER APPROACH
    //Function to expand around center and return longest palindrome
    string expandAroundCenter(string s,int left, int right){
        while(left>=0 && right<s.size() && s[left] == s[right]){
            left--,right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0) return "";

        string longest = "";

        for(int i=0;i<n;i++){
            //odd length palindrome(single character)
            string odd = expandAroundCenter(s,i,i);
            if(odd.length() > longest.length()){
                longest = odd;
            }

            //even length palindrome (two char center)
            string even = expandAroundCenter(s,i,i+1);
             if(even.length() > longest.length()){
                longest = even;
            }
        }
        return longest;
    }
};
