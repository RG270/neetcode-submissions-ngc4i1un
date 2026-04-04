class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i = 0, j = s1.length()-1;
        unordered_map<char, int> m;
        for (auto c:s1) m[c]++;
        while (j < s2.length()) {
            cout << i << " " << j << endl;
            unordered_map<char, int> m2;
            m2 = m;
            for (int k = i; k <= j; k++) {
                m2[s2[k]]--;
            }
            bool sum = true;
            for (auto a: m2) sum = sum && (a.second == 0);
            if (sum) return true;
            i++; j++;
        }
        return false;
    }
};
