class Solution {
public:
    int countValidPrefixes(string s) {
        int n = s.size();

        int cnt0 =0;
        int cnt1 = 0;
        int ans = 0;

        for(int i =0 ; i < n ; i++){
            if(s[i] == '0'){
                cnt0++;
            }
            else{
                cnt1++;
            }

            if(abs(cnt0-cnt1)<=1){
                ans++;
            }
        }

        return ans;
    }
};