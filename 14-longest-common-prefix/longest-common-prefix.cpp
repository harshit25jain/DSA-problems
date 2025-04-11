class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0]; //assume the first string as prefix

        for(int i=1;i<strs.size();i++){
            //reduce the prefix tomatch the current string
            while(strs[i].find(prefix) !=0){
                prefix= prefix.substr(0,prefix.size()-1);
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};