class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        for(int i = 0; i < n ; i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
            /*res[2*i] = nums[i];
            res[2*i+1] = nums[i+n];   
            cause 2*i = even index
            2*i+1 = odd index
            because we have to place first half of the inedx in even places(0,2,4) and second half at odd index   like (1,3,5).
            */
        }
        return res;
    }
};