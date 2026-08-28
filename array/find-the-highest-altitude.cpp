class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        vector<int>a;
        int alt = 0;
        
        int maxi = 0;
        for(int i = 0 ; i < n ; i++){
            alt += gain[i];
            maxi = max(maxi,alt);
        }
        return maxi;
    }
};