class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;

        int left = 0;
        int right = heights.size() - 1;

        while (left < right) {
            int area = min(heights[left], heights[right]) * (right - left);
            result = max(area, result);

            if (heights[left] <= heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return result;
    }
};
