class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int ans = 0;
        int st = 0, e = 0;
        int len = s.length();
        while (e < len) {
            char c = s[e];
            m[c]++;
            while (m[c] > 1 && st <= e) {
                m[s[st]]--;
                st++;
            }
            ans = max(ans, e-st+1);
            e++;
        }
        return ans;
    }
};
