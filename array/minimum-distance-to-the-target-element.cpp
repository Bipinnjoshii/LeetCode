class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == target){
                int diff = abs(i-start);
                mini = min(mini,diff);
            }
        }
        return mini;
    }
};