class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int cnt = 0;
        int star = 0;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '|'){
                cnt++;
            }

            if(cnt % 2 == 0){
                if(s[i] == '*'){
                    star++;
                }
            }

        }
        return star;

    }
};