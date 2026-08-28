class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();

        long long ans = 0;

        sort(nums.begin(),nums.end(),greater<int>());

        int cnt = min(k,mul-1);

        for(int i = 0 ; i < cnt ; i++){
            ans += (long long) nums[i] * (mul-i);
        }

        for(int i = cnt ; i < k ; i++){
            ans += nums[i];
        }

        return ans;
    }
};