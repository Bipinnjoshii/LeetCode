class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int high = n-1;

        int i = 0;
        int idx = -1;
        while(i < n){
            if(nums[i] == 0){
                idx = i;
                break;
            }
            else{
                i++;
            }
        }

        if(idx == -1){
            return 0;
        }

        while(idx < high){

            if(nums[high] != 0 && nums[idx] == 0){
                swap(nums[idx],nums[high]);
                cnt++;
                idx++;
                high--;
            while(nums[idx] != 0 && idx+1 < high){
                idx++;
            }
            while(nums[high] == 0 && high - 1 >= idx){
                high--;
            }
            }
            else{
                high--;
            }
        }
        return cnt;
    }
};