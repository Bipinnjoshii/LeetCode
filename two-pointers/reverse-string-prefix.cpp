class Solution {
public:
    string reversePrefix(string s, int k) {
        string str = "";
        int n = s.size();

        for(int i = k-1 ; i >=0 ; i--){
            str += s[i];
        }
        for(int i = k ; i < n ; i++){
            str += s[i];
        }

        return str;
    }
};