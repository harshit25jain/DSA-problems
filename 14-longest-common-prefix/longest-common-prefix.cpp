class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0]; //assume the first string as prefix

        for(int i=1;i<strs.size();i++){
            //reduce the prefix to match the current string
            while(strs[i].find(prefix) !=0){
                prefix= prefix.substr(0,prefix.size()-1);
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
/*
"The key idea is to start with the first string as a candidate prefix because any
common prefix must be part of the first string. Then, for every other string, 
I verify whether the current prefix appears at the beginning of that string. 
If it doesn't, I keep shortening the prefix by removing one character at a time 
until it becomes a valid prefix. By continuously reducing invalid prefixes, 
I eventually obtain the longest prefix common to all strings. 
If the prefix becomes empty, it means no common prefix exists.


*/



/* C# Code 
public class Solution
{
    public string LongestCommonPrefix(string[] strs)
    {
        if (strs == null || strs.Length == 0)
            return "";

        string prefix = strs[0]; // assume the first string as prefix

        for (int i = 1; i < strs.Length; i++)
        {
            // reduce the prefix to match the current string
            while (!strs[i].StartsWith(prefix))
            {
                prefix = prefix.Substring(0, prefix.Length - 1);
                if (prefix.Length == 0)
                    return "";
            }
        }

        return prefix;
    }
}




*/
