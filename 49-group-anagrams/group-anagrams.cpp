class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anamap;

        for(string s : strs){
            string sortedStr = s;
            sort(sortedStr.begin(),sortedStr.end());
            anamap[sortedStr].push_back(s);
        }
        vector<vector<string>>result;
        for(auto pair : anamap){
            result.push_back(pair.second);
        }
        return result;
    }
};
/*
Time Complexity: O(n * k log k)
Space Complexity: O(n * k)

I use a hash map to group anagrams together.
For each word, I sort the characters alphabetically — since anagrams have the same sorted representation.
I use the sorted string as a key and push the original word into the map’s value list.
After processing all strings, I return the values of the map as the grouped anagrams.
*/
