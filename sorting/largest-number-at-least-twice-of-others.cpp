class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN;

        int idx = -1;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;
            }
        }

       
        for(int i = 0; i < n ; i++){
            if(i == idx){
                continue;
            }
            else if(maxi < 2*nums[i]){
                return -1;
            }
        }
        return idx;
    }
};