class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>res;
        unordered_set<int>st(nums1.begin(),nums1.end());

        for(int i = 0 ; i < nums2.size() ; i++){
            if(st.contains(nums2[i])){
                res.insert(nums2[i]);
            }
        }

        vector<int>ans;

        for(auto x:res){
            ans.push_back(x);
        }

        return ans;
    }
};