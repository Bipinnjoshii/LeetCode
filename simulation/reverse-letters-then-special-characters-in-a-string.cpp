class Solution {
public:
    string reverseByType(string s) {
        int n = s.length();
        vector<char>str;
        vector<char>sp;
        for(int i = 0 ; i < n ; i++){
            if(s[i]<='z' && s[i]>='a'){
                str.push_back(s[i]);
            }
            else{
                sp.push_back(s[i]);
            }
        }
        reverse(str.begin(),str.end());
        reverse(sp.begin(),sp.end());
        int l = 0;
        int p = 0;
        for(int i = 0 ; i < n ; i++){
               if(s[i]<='z' && s[i]>='a'){
                   s[i] = str[l++];
               }
            else{
                s[i] = sp[p++];
            }
        }
        return s;
    }
};