class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n = arr.size();
        int mis = 0;
        long long sum = 0;
        int element = -1;
        long long tot = n*(n+1)/2;
        for(int i = 0 ; i< n ; i++){
             sum += arr[i];
        }
        for(int i = 0 ; i < n ; i++){
            int idx = abs(arr[i])-1;
             if(arr[idx]<0){
                 element = abs(arr[i]);
             }
             else{
                 arr[idx] = -arr[idx];
             }
        }
         mis = tot - (sum - element);
        return {element,mis};
    }
};