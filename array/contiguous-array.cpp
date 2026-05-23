class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int maxlen = 0;
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){
                nums[i] = -1;
            }
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum+=nums[i];
            if(sum == k){
                maxlen = i+1;
            }
            else if(mpp.find(sum)!=mpp.end()){
                maxlen = max(maxlen,i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
        return maxlen;
    }
};