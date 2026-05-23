class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();
        vector<int>freq(n+1,0);
        for(int x:nums){
            if(x > n) return false;
            freq[x]++;
            maxi = max(maxi,x);
        }
        
        int cnt = 0;
        for(auto x:freq){
            if(x>1){
                cnt++;
            }
        }
        if(cnt>1){
            return false;
        }
        if(maxi+1 == n && freq[n-1]==2){
            return true;
        }
        return false;
    }
};