class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int>mpp;

        int n = nums.size();

        for(int i = 0 ;i < n ; i++){
            if(nums[i]%2 == 0){
                mpp[nums[i]]++;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(mpp[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};