class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int cnt = 0;
        string ans = "";
        vector<string>str;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                if(cnt > 0){
                    ans += s[i];
                }
                cnt += 1;

            }
            else{
                cnt -= 1;
                if(cnt > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};