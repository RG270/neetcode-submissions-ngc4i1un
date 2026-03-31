class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, bool> m;
        for(auto n: nums) if (m[n]) return true; else m[n] = true;
        return false;
    }
};