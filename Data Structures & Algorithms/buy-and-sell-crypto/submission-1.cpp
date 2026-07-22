class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int left = 0;
        int right = 1;
        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(profit, maxProfit);
            }
            else {
                left = right;
            }
            right++;
        } 
        return maxProfit;
    }
};
