class Solution {
public:
    int sumOfElement(int num){
        int sum = 0;

        while(num!=0){
            int digit = num%10;
            sum += digit;
            num/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i = 0 ; i < n; i++){
            mini = min(mini,sumOfElement(nums[i]));
        }

        return mini;
    }
};