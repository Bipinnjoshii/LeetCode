class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
        vector<int>freq(26,0);
            for(int j = i ; j < n ; j++){
                freq[s[j]-'a']++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                
                for(auto x:freq){
                    if(x > 0){
                        mini = min(mini,x);
                        maxi = max(maxi,x);
                    }
                }

                ans += maxi-mini;
            }
        }
        return ans;
    }
};