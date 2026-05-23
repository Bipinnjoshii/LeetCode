class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,0);
        int pi = 0 , ni = 1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i]<0){
                ans[ni] = arr[i];
                ni+=2;
            }
            else{
                ans[pi] = arr[i];
                pi += 2;
            }
        }
        return ans;
    }
};