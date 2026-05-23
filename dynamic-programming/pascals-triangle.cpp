vector<int>generateRows(int n){
    long long ans = 1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int i = 1 ; i < n ; i++){
        ans = ans * (n-i);
        ans = ans/i;
        ansrow.push_back(ans);
    }
    return ansrow;
}
class Solution {
public:
    vector<vector<int>> generate(int N) {
        vector<vector<int>>result;
        for(int i = 1; i <= N ; i++){
            result.push_back(generateRows(i));
        }
        return result;
    }
};