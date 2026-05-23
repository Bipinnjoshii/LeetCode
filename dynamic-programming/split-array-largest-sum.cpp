class Solution {
public:

    int findSub(vector<int>&nums,int subsum){
        int subs = 1;
        long long sum = 0;

        for(int i = 0 ; i < nums.size() ; i++){

            if(sum+nums[i]<=subsum){
                sum += nums[i];
            }
            else{
                subs += 1;
                sum = nums[i];
            }
        }
        return subs;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){

            int mid = low + (high-low)/2;
            int subs = findSub(nums,mid);

            if(subs>k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};