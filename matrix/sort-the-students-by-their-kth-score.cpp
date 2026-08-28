class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int row = score.size();
        int col = score[0].size();

        for(int i = 0 ; i < row ; i++){
            swap(score[i][0],score[i][k]);
        }

        sort(score.rbegin(),score.rend());

        for(int i = 0; i < row ; i++){
            swap(score[i][0],score[i][k]);
        }
        return score;
    }
};