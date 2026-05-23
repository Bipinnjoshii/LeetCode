class Solution {
public:
    int maxi(vector<int>&piles){
        int maximum = 0;
        for(int i = 0 ; i< piles.size() ; i++){
            maximum = max(maximum,piles[i]);
        }
        return maximum;
    }
    long long totalHours(vector<int>&piles,int hourly){
            long long totalh = 0;

            for(int i = 0; i < piles.size(); i++){
                totalh += ceil((double)piles[i]/(double)hourly);
            }
            return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maxi(piles);

        while(low<=high){

            int mid = low+(high-low)/2;

            long long totalh = totalHours(piles,mid);

            if(totalh<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};