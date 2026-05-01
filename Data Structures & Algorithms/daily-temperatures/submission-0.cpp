class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int len = temp.size();
        vector<int> ans(len, 0);
        for (int i = 0; i < len; i++) {
            int j = i+1;
            while (j < len && temp[j] <= temp[i]) {
                j++;
            }
            ans[i] = j==len ? 0 : j-i;
        }
        return ans;
    }
};
