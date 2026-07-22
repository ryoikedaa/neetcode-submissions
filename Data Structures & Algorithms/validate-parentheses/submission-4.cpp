class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> closeToOpen = 
        {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (closeToOpen.count(c)) {
                if (!stack.empty() && closeToOpen[c] == stack.top()) {
                stack.pop();
                }
                else {
                    return false;
                }
            }
            else {
                stack.push(c);
            }
            
        }
        return stack.empty();
    }
};
