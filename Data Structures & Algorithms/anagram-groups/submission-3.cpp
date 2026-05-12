class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;

        unordered_map <string, vector<string>> hashMap;

        for (string s : strs) {
            string sortedString = s;
            sort(sortedString.begin(), sortedString.end());
            
            hashMap[sortedString].push_back(s);
        }


        for (auto pair : hashMap) {
            output.push_back(pair.second);
        }
        return output;
    }
};
