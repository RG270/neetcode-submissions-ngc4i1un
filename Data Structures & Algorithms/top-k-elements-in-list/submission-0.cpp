class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (auto n: nums)m[n]++;
        vector<pair<int, int>> v;
        for(auto n: m) v.push_back({n.second, n.first});
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for (auto n: v) {
            if (ans.size()==k) break;
            ans.push_back(n.second);
        }
        return ans;
    }
};
