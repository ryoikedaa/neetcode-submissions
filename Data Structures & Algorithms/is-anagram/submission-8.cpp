class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> stringS;
        unordered_map<char, int> stringT;

        for (int i = 0; i < s.size(); i++) {
            stringS[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            stringT[t[i]]++;
        }

        if (stringT == stringS) {
            return true;
        }
        return false;

    }
};
