class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy = nums;
        vector<int>res;
        sort(copy.begin(),copy.end());
        int n = nums.size();
        unordered_map<int,int>mpp;

        for(int i = 0 ; i < n ; i++){
            if(mpp.find(copy[i]) == mpp.end()){
                mpp[copy[i]] = i;
            }
        }

        for(int i = 0 ; i < n ; i++){
            res.push_back(mpp[nums[i]]);
        }
        return res;
    }
};