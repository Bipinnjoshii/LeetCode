class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        unordered_map<int,int>mpp;

        for(int i = 0; i< n; i++){
            int need = k-nums[i];

            if(mpp[need] > 0){
                cnt++;
                mpp[need]--;
            }
            else{
                mpp[nums[i]]++;
            }
        }
        return cnt;
    }
};