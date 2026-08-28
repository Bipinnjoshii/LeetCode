class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();

        int a = 0;
        int b = 0;

        for(int i = 0 ; i < n/2 ; i++){
            if(tolower(s[i]) == 'a' ||tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u' ){
                a++;
            }
        }

        for(int i = n/2 ; i < n ; i++){
            if(tolower(s[i]) == 'a' ||tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u' ){
                b++;
            }
        }

        if(a==b){
            return true;
        }
        return false;
    }
};