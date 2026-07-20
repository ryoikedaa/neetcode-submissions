class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        
        //forwardPrefix algorithm
        int forwardProduct = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] = forwardProduct;
            forwardProduct *= nums[i];
        }

        //backwardPrefix
        int backwardProduct= 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= backwardProduct;
            backwardProduct *= nums[i];
        }

        return res;
    }
};
