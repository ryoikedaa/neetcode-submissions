class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> output;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for (auto pair: count) {
            int num = pair.first;
            int freq = pair.second;

            bucket[freq].push_back(num);
        }

        for (int i = bucket.size() - 1; i > 0; i--) {
            for (int num: bucket[i]) {
                output.push_back(num);

                if (output.size() == k) {
                    return output;
                }
            }
        }
        return output;
    }
};
