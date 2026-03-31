class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i = 0; i<nums.size(); i++) {
            int n = nums[i];
            if (m[target - n] > 0) return {m[target - n] - 1, i};
            m[n] = i+1;
        }
        return {0, 1};
    }
};
