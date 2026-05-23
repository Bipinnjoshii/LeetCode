class Solution {
public:
    bool check(vector<int>& nums) {
    int n = nums.size();
    int fault=0;
    if(n==1){
        return true;
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(nums[i]>nums[i+1]){
            fault +=1;
        }
    }
    if(nums[n-1] > nums[0]){
        fault += 1;
    }
    if(fault <= 1){
        return true;
    }
    return false;
    }
};