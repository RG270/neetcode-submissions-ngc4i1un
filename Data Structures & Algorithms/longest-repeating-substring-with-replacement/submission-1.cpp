class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int i = 0, j = 0, ans = 0;
        m[s[j]]++;
        while (j < s.length()) {
            cout << i << " " << j << endl;
            int maxi = 0, sum = 0;
            cout << "m==";
            for (auto a: m) {
                maxi = max(maxi, a.second);
                sum += a.second;
                cout << a.first << "," << a.second;
            }
            cout << endl;
            if (k >= (sum - maxi)) {
                ans = max(ans, j-i+1);
                j++;
                m[s[j]]++;
            } else {
                m[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};
