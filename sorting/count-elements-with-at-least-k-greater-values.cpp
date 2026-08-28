class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 0){
            return n;
        }

        sort(nums.begin(),nums.end());

        auto it = lower_bound(nums.begin(),nums.end(),nums[n-k]);

        int cnt = it-nums.begin();

        return cnt;
    }
};