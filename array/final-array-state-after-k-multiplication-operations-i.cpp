class Solution {
public:
    int small(vector<int>&nums){
        int idx = 0;
        int n = nums.size();
        int mini = nums[0];
        for(int i = 1 ; i < n ; i++){
           if(nums[i]<mini){
            mini = nums[i];
            idx = i;
           }
        }
        return idx;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while(k--){
        int index = small(nums);
        nums[index] = nums[index] * multiplier;
        }
        return nums;
    }
};