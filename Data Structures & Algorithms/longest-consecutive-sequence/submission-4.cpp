class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0] - 1, ans = 1, cnt = 0;
        for (auto n: nums) {
            if (a == n) {
                //
            } else if (n - 1 == a) {
                cnt++;
                ans = max(ans, cnt);
            } else {
                cnt = 1;
            }
            a = n;
        }
        ans = max(ans, cnt);
        int len = nums.size();
        return min(len, ans);
    }
};
