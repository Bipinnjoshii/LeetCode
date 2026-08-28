class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int>mpp;

        for(auto x:nums){
            mpp[x]++;
        }

        vector<vector<int>>bucket(n+1);
        for(auto it:mpp){
            int first = it.first;
            int freq = it.second;

            bucket[freq].push_back(first);
        }

        vector<int>ans;

        for(int i = n ; i >=1 ; i--){
            for(auto it:bucket[i]){
                ans.push_back(it);
            }

            if(ans.size() == k){
                return ans;
            }
        }
        return ans;
    }
};