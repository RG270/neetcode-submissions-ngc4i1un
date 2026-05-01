class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size(), 0);

        for (int i = temperatures.size()-1; i >= 0; i--) {
            while (!st.empty() && temperatures[i] >= temperatures[st.top()]) {
                st.pop();
            }
            if (!st.empty()) {
                int idx = st.top();
                res[i] = idx-i;
            }
            st.push(i);
        }

        return res;        
    }
};