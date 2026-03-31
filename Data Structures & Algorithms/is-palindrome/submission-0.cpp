class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (auto c: s) {
            c = std::tolower(c);
            if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')) {
                str += c;
            }
        }
        string reversed(str.rbegin(), str.rend());
        // cout << str << endl << reversed;
        return str == reversed;
    }
};
