class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(auto st: strs) {
            string sst = st;
            sort(sst.begin(), sst.end());
            m[sst].push_back(st);
        }
        vector<vector<string>> ans(m.size());
        int i = 0;
        for (auto a: m) {
            ans[i++] = a.second;
        }
        return ans;
    }
};
