class Solution {
public:
    int findMin(vector<int> &nums) {
        int result = nums[0];
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] < nums[right]) {
                result = min(result, nums[left]);
            }
            int middle = (right + left) / 2;
            result = min(result, nums[middle]);

            if (nums[left] <= nums[middle]) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }
        return result;

        
    } 
};
