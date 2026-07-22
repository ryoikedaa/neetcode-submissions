class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char> charSet(s.begin(), s.end());
        int result = 0;

        for (char c: charSet) {
            int count = 0;
            int left = 0;
            

            for (int right = 0; right < s.size(); right++) {
                if (s[right] == c) {
                    count++;
                }

                while ((right - left + 1) - count > k) {

                    if (s[left] == c) {
                        count--;
                    }
                    left++;
                }
                result = max(result, right - left + 1);

            }
        }
        return result;
        
    }
};
