class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 && nums[0] == 0){
            return 0;
        }


        int i = 0;
        int j = 1;
        int maxi = INT_MIN;
        int ans = nums[0];

        for(int i = 1; i < n ; i++){
            ans = ans ^ nums[i];
        }


        if(ans != 0){
            return n;
        }
        else if(ans == 0){
            for(int i = 0 ; i < n ; i++){
                if(nums[i] > 0){
                    return n-1;
                }
            }
        }

        
        return 0;
    }
};