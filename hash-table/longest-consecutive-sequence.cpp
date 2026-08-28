class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int>st(nums.begin(),nums.end());

        int longest = 0;

        for(auto x:st){
            if(st.find(x-1)==st.end()){

                int curr = x;
                int len = 1;

                while(st.find(curr+1)!=st.end()){
                    curr+=1;
                    len+=1;
                }

                longest = max(longest,len);
            }
        }
        return longest;
    }
};