class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            int digits = 0;
            while(num>0){
                num = num/10;
                digits += 1;
            }
            if(digits % 2 == 0){
                cnt += 1;
            }
        }
        return cnt;
    }
};