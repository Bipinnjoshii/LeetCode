class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int cnt = duration;
        for(int i = 0 ; i < n - 1 ; i++){

            if(timeSeries[i+1] - timeSeries[i] < duration){
                cnt += timeSeries[i+1] - timeSeries[i];
            }
            else{
                cnt += duration;
            }

        }
        return cnt;
    }
};