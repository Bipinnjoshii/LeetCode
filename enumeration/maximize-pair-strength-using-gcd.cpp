class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            long long res = 0;
            long long g = 0;
            for(int j = 0 ; j < n ; j++){
                    if(i!=j){
                        g = __gcd(nums[i],nums[j]);
                        res = ((long long)nums[i] * nums[j])/((long long) g*g);
                    }
                    maxi = max(maxi,res);
            }
        }

        return maxi;
    }
};