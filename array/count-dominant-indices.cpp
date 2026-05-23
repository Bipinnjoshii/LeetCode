class Solution {
public:
    int dominantIndices(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        double sum = 0;
        double average = 0;
        for(int i = 0 ; i < n ; i++){
            sum+=arr[i];
        }
        for(int i = 0 ; i < n-1 ; i++){
            sum = sum - arr[i];
            average = sum/(n-i-1);
            if(arr[i] > average){
                count++;
            }
        }
        return count;
    }
};