class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();
        int cnt = 0;

        unordered_map<string,int>mpp;

        for(int i = 0 ; i < n ; i++){
            mpp[words1[i]]++;
        }

        for(int i = 0 ; i < m ; i++ ){
            mpp[words2[i]]++;
        }

        for(auto it:mpp){
            int freq = it.second;

            if(freq == 2){
                cnt++;
            }
        }

        return cnt;
    }
};