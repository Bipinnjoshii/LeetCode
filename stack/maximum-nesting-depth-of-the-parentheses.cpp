class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxi = INT_MIN;
        int cnt = 0;
    
        for(auto x:s){
            if(x == '('){
                cnt++;
            }
            else if(x == ')'){
                cnt--;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};