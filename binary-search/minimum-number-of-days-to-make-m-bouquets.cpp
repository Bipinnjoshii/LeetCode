class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k,int day){
        int cnt = 0;
        int no0fb = 0;

        for(int i = 0 ; i < bloomDay.size() ; i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                no0fb += cnt/k;
                cnt = 0;
            }
        }
        no0fb += cnt/k;
        return (no0fb>=m);
    }


    int minDays(vector<int>& bloomDay, int m, int k){
        int n = bloomDay.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;

        long long val = (long long)m*(long long)k;
        if(val>n){
            return -1;
        }
        
        for(int i = 0 ; i < bloomDay.size() ; i++){
            maxi = max(maxi,bloomDay[i]);
            mini = min(mini,bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = low+(high-low)/2;

            if(possible(bloomDay,m,k,mid)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};