class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<9;i++){
            map<char, bool> mv, mh;
            mv.clear(); mh.clear();
            for (int j=0;j<9;j++) {
                if (board[i][j] != '.' && mh[board[i][j]]) return false;
                mh[board[i][j]] = true;
                if (board[j][i] != '.' && mv[board[j][i]]) return false;
                mv[board[j][i]] = true;
                // cout << i << " " << j << ", ";
            }
        }
        for (int l = 0; l < 9; l+=3) {
            for (int k=0; k<9; k+=3) {
                map<char, bool> m;
                for (int i=0;i<3;i++){
                    for (int j=0;j<3;j++) {
                        if (board[i+l][j+k] != '.' && m[board[i+l][j+k]]) return false;
                        m[board[i+l][j+k]] = true;
                        // cout << i+l << " " << j+k << endl;
                    }
                }
            }
        }
        return true;
    }
};
