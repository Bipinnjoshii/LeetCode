class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

         // 1. Skip leading spaces
        while(i < n && s[i] == ' '){  //we can also use issapce[s[i]] instead
            i++;
        }

        // 2. Handle sign

        int sign = 1;

        if(i < n && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }


        // 3. Build number with overflow check

        long long ans = 0;

        while(i < n && isdigit(s[i])){
            ans = ans * 10 + (s[i] - '0');

            if(ans * sign > INT_MAX){
                return INT_MAX;
            }
            else if(ans * sign < INT_MIN){
                return INT_MIN;
            }
            i++;
        }
    return ans * sign;
    }
};