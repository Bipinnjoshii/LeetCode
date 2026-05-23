class Solution {
public:
    int i=0;
    bool isPalindrome(string s) {
        for (char &c : s) c = tolower(c);
        s.erase(remove_if(s.begin(), s.end(), [](char c){ return !isalnum(c); }), s.end());
        return check(s,0);
    }
    bool check(string &s,int i){
        if(i>=s.size()/2){
            return true;
        }
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
        return check(s,i+1);
    }
};