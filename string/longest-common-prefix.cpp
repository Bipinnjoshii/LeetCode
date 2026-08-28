class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        string ans = "";
        for(int i = 0 ; i < n ; i++){
            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++){
                if(i + 1> strs[j].size() || ch != strs[j][i]){
                    return ans;
                }
            }
            ans += ch;
        }
        return ans;
    }
};