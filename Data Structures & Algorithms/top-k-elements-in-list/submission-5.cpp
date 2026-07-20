class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;

        for (auto& n : nums) {
            map[n]++;
        }

        for (auto& pair: map) {
            pq.push(make_pair(pair.second, pair.first));
        }
        vector<int> output;

        
for (int i = 0; i < k; i++) {
    output.push_back(pq.top().second);
    pq.pop();
}
        return output;
    }
};
