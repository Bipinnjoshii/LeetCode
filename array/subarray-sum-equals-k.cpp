class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        long long sum =0;
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        for(int x:nums){
            sum = sum+x;
            if(mpp.find(sum-k)!=mpp.end()){
                count = count + mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    }
};
