class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int i = 0, j = len-1;
        int ans = 0;
        vector<int> prev(len), forw(len);
        prev[0] = height[0];
        forw[len-1] = height[len-1];
        for (int i = 1; i < len; i++) {
            prev[i] = max(height[i], prev[i-1]);
            forw[len-1-i] = max(forw[len-i], height[len-i-1]);
        }
        for (int i = 1; i < len-1; i++) {
            ans += max(min(forw[i], prev[i]) - height[i], 0);
        }
        // for (auto n: prev) cout << n << " ";
        // cout << endl;
        // for (auto n: forw) cout << n << " ";
        return ans;
    }
};