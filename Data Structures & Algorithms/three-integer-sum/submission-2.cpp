#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;

        for (int i = 0; i < len; i++) {
            int n = nums[i];
            int j = i + 1, k = len - 1;

            while (j < k) {
                if (n + nums[j] + nums[k] == 0) {
                    ans.insert({nums[i], nums[j], nums[k]});
                    j++;
                } else if (n + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};