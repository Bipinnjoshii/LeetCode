class Solution {
public:
    int minOperations(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] <=arr[i-1]){
                int need = arr[i-1]- arr[i] +1;
                cnt += need;
                arr[i] = arr[i-1]+1;
            }
        }
        return cnt;
    }
};