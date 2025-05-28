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