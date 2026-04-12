class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> s;
        for (auto c: tokens) {
            if (c=="+") {
                int a = s.top();
                s.pop();
                a = a+s.top();
                s.pop();
                s.push(a);
            } else if (c=="-") {
                int a = s.top();
                s.pop();
                a = s.top()-a;
                s.pop();
                s.push(a);
            } else if (c=="*") {
                int a = s.top();
                s.pop();
                a = a*s.top();
                s.pop();
                s.push(a);
            } else if (c=="/") {
                int a = s.top();
                s.pop();
                a = s.top()/a;
                s.pop();
                s.push(a);
            } else {
                s.push(stol(c));
            }
            cout<<s.top() << " ";
        }
        return s.top();
    }
};
