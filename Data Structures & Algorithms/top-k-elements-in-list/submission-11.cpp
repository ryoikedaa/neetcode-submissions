class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        unordered_map<int, int> hashMap;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < nums.size(); i++) {
            hashMap[nums[i]]++;
        }

        for (auto pair: hashMap) {
            pq.push(make_pair(pair.second, pair.first));

        }

        for (int i = 0; i < k; i++) {
            output.push_back(pq.top().second);
            pq.pop();
        }
        return output;
    }
};
