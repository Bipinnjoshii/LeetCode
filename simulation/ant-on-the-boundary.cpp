class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();

        int moves = 0;
        int cnt = 0;

        for(int i = 0 ; i < n ; i++){
            moves += nums[i];

            if(moves == 0){
                cnt++;
            }
        }
        return cnt;
    }
};