class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        int n = nums.size();

        vector<int>freq(n+1,0);

        
        vector<vector<int>>ans;
        int l = 0;

        for(int i = 0 ; i < n ; i++){

            if(freq[nums[i]] == ans.size()){
                ans.push_back({});
            }

            
            ans[freq[nums[i]]].push_back(nums[i]);
            freq[nums[i]]++;
        }

        return ans;
    }
};