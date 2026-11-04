class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> v;

        for (auto [num, count] : freq) {
            v.push_back({num, count});
        }

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });

        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(v[i].first);
        }

        return result;
    }
};