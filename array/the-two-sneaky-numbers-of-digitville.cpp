class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size()-2;
        vector<int>res;
        vector<int>freq(n,0);
        for(auto x:nums){
            freq[x]++;
            if(freq[x]==2){
                res.push_back(x);
            }
        }
        return res;
    }
};