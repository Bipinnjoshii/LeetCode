class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int CountZero = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]%2==0){
                CountZero+=1;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(i<CountZero){
                nums[i] = 0;
            }
            else{
                nums[i] = 1;
            }
        }
        
        return nums;
    }
};