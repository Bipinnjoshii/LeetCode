class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        long long sum = 0;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            maxi = nums[i];
            mini = nums[i];
            for(int j = i+1; j < n ; j++){
                maxi = max(maxi,nums[j]);
                mini = min(mini,nums[j]);

                sum += (long long)(maxi - mini);
            }
        }

        return sum;
    }
};