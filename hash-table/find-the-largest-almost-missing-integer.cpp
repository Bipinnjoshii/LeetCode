class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_set<int>st;

        if(k == 1){
            return -1;
        }

        for(int i = 1 ; i < n-1 ; i++){
            st.insert(nums[i]);
        }

        int maxi = INT_MIN;
        int other = -1;
        int idx = -1;

        if(nums[0] > nums[n-1]){
            maxi = nums[0];
            other = nums[n-1];
            idx = 0;
        }
        else{
            maxi = nums[n-1];
            idx = n-1;
            other = nums[0];
        }


        if(st.find(maxi) != st.end()){
            return other;
        }
        
        return maxi;
    }
};