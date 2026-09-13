class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n = c.size();

        unordered_set<int>st(c.begin(),c.end());

        if(st.size() < n/2){
            return st.size();
        }

        return n/2;
    }
};