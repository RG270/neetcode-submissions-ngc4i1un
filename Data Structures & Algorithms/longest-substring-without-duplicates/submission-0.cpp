class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int ans = 0;
        int st = 0, e = 0;
        while (e < s.length()) {
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
