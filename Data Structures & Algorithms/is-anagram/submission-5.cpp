class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashmapS;
        unordered_map<char, int> hashmapT;


        for (char c : s) {
            hashmapS[c]++;
        }
        for (char c: t) {
            hashmapT[c]++;
        }

        if (hashmapS == hashmapT) {
            return true;
        }

        return false;
    }
};
