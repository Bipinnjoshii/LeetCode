class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        int m = s.size();
        if(s[0] == x + '0'){
            return false;
        }
        bool flag = false;
        for(int i = 1 ; i < m ; i++){
            if(s[i] == x + '0'){
                flag = true;
            }
        }

        if(flag == true){
            return true;
        }
        return false;
    }
};