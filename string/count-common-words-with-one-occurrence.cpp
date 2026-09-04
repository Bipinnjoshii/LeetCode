class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();
        int cnt = 0;

        unordered_map<string,int>mpp1,mpp2;

        for(int i = 0 ; i < n ; i++){
            mpp1[words1[i]]++;
        }

        for(int i = 0 ; i < m ; i++){
            mpp2[words2[i]]++;
        }

        for(int i = 0 ; i < m ; i++){
            if(mpp1[words2[i]] == 1 && mpp2[words2[i]] == 1){
                cnt++;
            }
        }
        

        return cnt;
    }
};