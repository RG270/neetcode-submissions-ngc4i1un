class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], ans = 0;
        for(auto n: prices) {
            mini = min(n, mini);
            ans = max(ans, n-mini);
        }
        return ans;
    }
};
