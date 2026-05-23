class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(101,0);

        for(int i = 0 ; i < n ; i++){
            res[nums[i]]++;
        }
        int sum = 0;
        for(int i = 0 ; i < res.size() ; i++){
            if(res[i] == 1){
                sum += i;
            }
        }

        return sum;
    }
};