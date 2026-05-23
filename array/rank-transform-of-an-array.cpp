class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(arr);
        unordered_map<int,int>mpp;
        vector<int>res(n);
        sort(ans.begin(),ans.end());
        int rank = 1;
        for(int i = 0 ; i < n ; i++){
           if(mpp.find(ans[i]) == mpp.end()){
                mpp[ans[i]] = rank;
                rank++;
           }
        }
        for(int i= 0 ; i < n ; i++ ){
            ans[i] = mpp[arr[i]];
        }
        return ans;
    }
};