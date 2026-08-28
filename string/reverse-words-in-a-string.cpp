class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> str;
        int end = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == ' ') {
                if(end != i) {  
                    str.push_back(string(s.begin() + end, s.begin() + i));
                }
                end = i + 1;
            }
        }

        if(end != n) {
            str.push_back(string(s.begin() + end, s.end()));
        }

        string ans = "";

        int m = str.size();

        for(int i = m - 1; i >= 0; i--) {
            ans += str[i];
            if(i > 0) {
                ans += " ";
            }
        }

        return ans;
    }
}; 