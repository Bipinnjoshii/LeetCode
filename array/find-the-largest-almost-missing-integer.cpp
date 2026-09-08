class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;

        vector<int>freq(51,0);

        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;
        }

        if(k == 1){

            if(n == 2 && nums[0] == nums[n-1]){
                return -1;
            }

            for(int i = 0 ; i < n ; i++){
                if(freq[nums[i]] == 1){
                maxi = max(maxi,nums[i]);
                }
            }

            if(maxi == INT_MIN){
                return -1;
            }
            return maxi;
        }

        if(k == n){
            for(int i = 0 ; i < n ; i++){
                maxi = max(maxi,nums[i]);
            }

            return maxi;
        }

        if(nums[0] == nums[n-1]){
            return -1;
        }


        int other = -1;
        int idx = -1;


        if(nums[0] > nums[n-1]){
            maxi = nums[0];
            other = nums[n-1];
            idx = 0;
        }
        else{
            maxi = nums[n-1];
            idx = n-1;
            other = nums[0];
        }


        if(freq[maxi] != 1){
            if(freq[other] == 1){
                return other;
            }
            else{
                return -1;
            }
        }
        else if(maxi == INT_MIN){
            return -1;
        }
        else{
            return maxi;
        }
        
        return -1;
    }
};