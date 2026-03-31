class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        for(auto n: s) m[n]++;
        for(auto n: t) m[n]--;
        for(auto n: m) if (n.second != 0) return false;
        return true;
    }
};
