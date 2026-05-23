class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int ans = -1;
        int mini = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(capacity[i]>=itemSize){
                if(capacity[i]<mini){
                    mini = capacity[i];
                    ans = i;
                }
            }
        }
        return ans;
    }
};