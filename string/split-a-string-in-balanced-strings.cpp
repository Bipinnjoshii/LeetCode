class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();

        int cnt = 0;
        char first = s[0];
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(first == 'R'){
                if(s[i] == 'R'){
                    cnt++;
                }
                else{
                    if(cnt>0){
                        cnt--;
                    }
                }

                if(cnt==0){
                    first = s[i+1];
                    ans++;
                }
            }
            else{
                if(s[i] == 'L'){
                    cnt++;
                }
                else{
                    if(cnt>0){
                        cnt--;
                    }
                }

                if(cnt == 0){
                    first = s[i+1];
                    ans++;
                }
            }
        }
        return ans;
    }
};