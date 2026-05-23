class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;
        unordered_set<int>st(friends.begin(),friends.end());
        for(auto x : order){
            if(st.count(x)){
                res.push_back(x);
            }
        }
        return res;
    }
};