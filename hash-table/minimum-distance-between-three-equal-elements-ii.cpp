class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        unordered_map<int,vector<int>>mpp;

        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto it:mpp){
            int m = it.second.size();
            if(m>=3){
                
                for(int i = 0 ; i+2 < m ; i++){
                    int sum = 2*(it.second[i+2]-it.second[i]);
                    mini = min(mini,sum);
                }
            }
        }

        if(mini == INT_MAX){
            return -1;
        }

        return mini;
    }
};