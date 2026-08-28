class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n  = nums.size();


        int sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }

        int msum = 0;
        for(int i = n-1 ; i >= n-k ; i--){
            msum += nums[i];
        }

        return abs(sum-msum);
    }
};