class Solution {
public:
    int minPenalty(int period, vector<int>& l, vector<int>& a) {

        int n = l.size();
        int m = a.size();
        int wait = 0;
        int maxi = INT_MIN;

        sort(l.begin(),l.end());

        for(int i = 0; i < m ; i++){

            int r = a[i] % period;

            if(r < l[n-1]){
                wait = 0;
            }
            else{
                wait = period - r;
            }

            maxi = max(maxi,wait);
        }

        return maxi;
    }
};