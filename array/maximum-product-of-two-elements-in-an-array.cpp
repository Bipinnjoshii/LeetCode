class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN;
        int idx = 0;
        for(int i = 0 ; i < n ; i++){
           if(nums[i] > maxi){
            maxi = nums[i];
            idx = i;
           }
        }

        int maxprod = INT_MIN;
        int mul = 1;
        for(int i = 0 ; i < n ; i++){
            if(i!=idx){
            mul = (maxi-1) * (nums[i]-1);
            maxprod = max(maxprod,mul);
            }
        }
        return maxprod;
    }
};