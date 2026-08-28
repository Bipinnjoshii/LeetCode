class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char>rows[9];
        unordered_set<char>cols[9];
        unordered_set<char>boxes[9];

        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){

                if(board[i][j] == '.'){
                    continue;
                }
                else{

                    char ch = board[i][j];
                    int box = (i/3)*3 + (j/3);

                    if(rows[i].count(ch) || cols[j].count(ch) || boxes[box].count(ch)){
                        return false;
                    }
                    else{
                        rows[i].insert(ch);
                        cols[j].insert(ch);
                        boxes[box].insert(ch);
                    }
                }
            }
        }
        return true;
    }
};