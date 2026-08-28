class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        int n = g.size();

        vector<vector<int>>ans;

        unordered_map<int,vector<int>>temp;


        for(int i = 0 ; i < n ; i++){

            temp[g[i]].push_back(i);

            if(temp[g[i]].size() == g[i]){
                ans.push_back(temp[g[i]]);
                temp[g[i]].clear();
            }

        }
        return ans;
    }
};