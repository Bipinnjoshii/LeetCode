class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = n-1;

        while(left < right){
            if(nums[left]+nums[right]<target){
                cnt += right-left;
                left++;
            }
            else{
                right--;
            }
        }
        return cnt;
    }
};