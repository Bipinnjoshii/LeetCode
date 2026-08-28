class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n = queries.size();

        vector<int>p(m);
        vector<int>ans;

        for(int i = 0 ; i < m ; i++){
            p[i] = i+1;
        }

        for(int i = 0 ; i < n ; i++){
            auto it = find(p.begin(),p.end(),queries[i]);
            int idx = it - p.begin();
            ans.push_back(idx);

            int x = p[idx];
            p.erase(p.begin() + idx);
            p.insert(p.begin(), x);
        }

        return ans;
    }
};