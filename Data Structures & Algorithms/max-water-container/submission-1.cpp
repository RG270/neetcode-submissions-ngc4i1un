class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int i = 0, j = len-1;
        int ans = 0;
        while (i < j) {
            int w = (j - i) * min(heights[j], heights[i]);
            ans = max(ans, w);
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};
