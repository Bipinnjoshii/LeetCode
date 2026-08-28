class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int target = k;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == target){
                target += k;
            }
            else if(nums[i] > target){
                break;
            }
        }

        return target;
    }
};