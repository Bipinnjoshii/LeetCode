class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        unordered_map<int,int>freq1;
        unordered_map<int,int>freq2;
        
        for(auto x:nums1){
            freq1[x]++;
        }
        for(auto x:nums2){
            freq2[x]++;
        }

        vector<vector<int>>ans(2);

        for(auto it:freq1){
            if(it.second >=1 && freq2[it.first] == 0){
                ans[0].push_back(it.first);
            }
        }
        

        for(auto it:freq2){
            if(it.second >=1 && freq1[it.first] == 0){
                ans[1].push_back(it.first);
            }
        }


        return ans;
    }
};