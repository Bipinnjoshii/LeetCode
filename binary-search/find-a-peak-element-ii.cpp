int findRow(vector<vector<int>>& mat,int n,int m,int col){
    int maxi = INT_MIN;
    int row = -1;
    for(int i = 0 ; i < n ; i++){
        if(mat[i][col] > maxi){
            maxi = mat[i][col];
            row = i;
        }
    }
    return row;
}

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;

    while(low <= high){
        int mid = low + (high - low)/2; //column number
        int row = findRow(mat , n , m ,mid); // row number
        int left = -1;
        int right = -1;
        if(mid - 1 >= 0){
            left = mat[row][mid - 1];
        }
        if(mid + 1 < m){
            right = mat[row][mid + 1];
        }
        if(mat[row][mid] > left && mat[row][mid]>right){
            return {row,mid};
        }
        else if(mat[row][mid] < left){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return{-1,-1};
    }
};