class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            while(num>0){
                int d = num%10;
                if(d == digit){
                    cnt++;
                }
                num = num/10;
            }
        }
        return cnt;
    }
};