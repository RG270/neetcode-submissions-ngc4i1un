class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (auto a: strs) {
            s += a;
            s += '-';
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string str = "";
        for (auto c: s) {
            if (c=='-') {
                ans.push_back(str);
                str = "";
            } else {
                str += c;
            }
        }
        return ans;
    }
};
