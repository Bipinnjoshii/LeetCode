class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;

        if(n < 1000){
            return 0;
        }
        else if(n >=1000 && n <= 999999){
            cnt += n-999;
        }
        else if(n >= 1000000 && n <= 999999999){
            cnt += n - 999999;
        }
        else if(n >= 1000000000 && n <= 999999999999){
            cnt += n - 999999999;
        }
        else if(n >= 1000000000000 && n <= 1000000000000000){
            cnt += n - 999999999999;
        }

        return cnt;
    }
};