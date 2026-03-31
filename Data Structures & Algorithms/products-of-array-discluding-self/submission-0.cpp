class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prev(nums.size()), forv(nums.size());
        int p = 1, f = 1;
        for (int i = 0; i < nums.size(); i++) {
            p = p * nums[i];
            f = f * nums[nums.size()-i-1];
            prev[i] = p;
            forv[nums.size()-i-1] = f;
        }
        vector<int> ans(nums.size());
        ans[0] = forv[1];
        ans[nums.size()-1] = prev[prev.size()-2];
        for (int i = 1; i < nums.size()-1; i++) {
            ans[i] = prev[i-1]*forv[i+1];
        }
        return ans;
    }
};
