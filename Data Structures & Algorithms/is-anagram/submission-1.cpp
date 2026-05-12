class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> hashMapS;
        unordered_map<char, int> hashMapT;

        for (int i = 0; i < s.size(); i++) {
            hashMapS[s[i]]++;
        }
        for (int j = 0; j < t.size(); j++) {
            hashMapT[t[j]]++;
        }

        if (hashMapS == hashMapT) {
            return true;
        }
        return false;
    }
};
