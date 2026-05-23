class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int cnt = 0;
        while(n>0){
            int digit = n%10;
            if(num % digit == 0){
                cnt++;
            }
            n = n/10;
        }
        return cnt;
    }
};