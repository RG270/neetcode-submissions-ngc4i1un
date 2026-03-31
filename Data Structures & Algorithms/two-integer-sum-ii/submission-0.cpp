class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        int a = 0, b = len-1;
        while (a < b) {
            if (numbers[a] + numbers[b] > target) {
                b--;
            } else if (numbers[a] + numbers[b] < target) {
                a++;
            } else {
                break;
            }
        }
        return {a+1, b+1};
    }
};
