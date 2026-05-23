class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum == k ){
                return{i+1,j+1};
            }
            else if(sum<k){
                i++;
            }
            else{
                j--;
            }
        }
        
        return {-1};
    }
};