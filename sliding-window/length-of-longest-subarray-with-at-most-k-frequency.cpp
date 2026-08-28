class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();

        if(n == 1){
            return 1;
        }

        unordered_map<int,int>mpp;

        int i = 0;
        int j = 0;
        int maxi = INT_MIN;

        while(j < n){
            if(mpp[nums[j]] <= k-1){
                mpp[nums[j]]++;
                j++;
            }
            else{
                mpp[nums[i]]--;
                i++;
            }
            maxi = max(maxi,j-i);
        }
        
        return maxi;
    }
};