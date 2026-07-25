class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;

        int left = 0;
        int right = heights.size() - 1;

        while (left < right) {

            int area = (right - left) * min(heights[left], heights[right]);

            if (heights[left] <= heights[right]) {
                result = max(result, area);
                left++;
            }
            else {
               result = max(result, area);
               right--;
            }
    

        }

        return result;
    }
};
