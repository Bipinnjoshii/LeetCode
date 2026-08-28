class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int,int>mpp;

        for(auto x:arr){
            mpp[x]++;
        }

        int maxi = INT_MIN;

        for(auto it:mpp){
            if(it.first == it.second){
                maxi = max(maxi,it.first);
            }
        }
        if(maxi == INT_MIN){
            return -1;
        }
        return maxi;
    }
};