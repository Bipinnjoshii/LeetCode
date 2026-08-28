class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        int sum = nums[0];

        vector<int>freq(51,0);

        for(int i = 0 ; i < n ; i++){
            freq[nums[i]] = 1;
        }

        for(int j = 1 ; j < n ; j++){
            if(nums[j] == nums[j-1] + 1){
                sum += nums[j];
            }
            else{
                break;
            }
        }

        while(sum < 51 && freq[sum] != 0){
            sum++;
        }

        return sum;
    }
};