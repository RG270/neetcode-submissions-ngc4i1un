class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, vector<int>> m;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            m[nums[i]].push_back(i);
        }
        set<vector<int>> ans;
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                int n = -1 * (nums[i] + nums[j]);
                if (m[n].size() > 0) {
                    for (auto k: m[n]) {
                // cout << i << " " << j << " " << n << " " << k << endl;
                        if (k!=i && k!=j) {
                            vector<int> v({nums[i], nums[j], nums[k]});
                            sort(v.begin(), v.end());
                            ans.insert(v);
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
