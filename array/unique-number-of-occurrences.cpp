class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int,int>mpp;

        for(auto x:arr){
            mpp[x]++;
        }

        unordered_set<int>st;

        for(auto it:mpp){
            int freq = it.second;

            if(st.find(freq)!=st.end()){
                return false;
            }
            else{
                st.insert(freq);
            }
        }
        return true;
    }
};