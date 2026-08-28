class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;

        for(auto x:s){
            mpp[x]++;
        }

        vector<string>bucket(n+1);

        for(auto it:mpp){
            char ch = it.first;
            int freq = it.second;

            bucket[freq] += ch;
        }

        string ans = "";
        for(int freq = n ; freq >=1 ; freq--){
           for(auto ch:bucket[freq]){
            ans.append(freq,ch);
           }
        }
        return ans;
    }
};