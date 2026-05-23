class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;
        if(n>=1000){
            cnt += (long long)(min(n,(long long)999999)-1000+1)*1;
        }
        if(n>=1000000){
            cnt += (long long)(min(n,(long long)999999999)-1000000+1)*2;
        }
        if(n >= 1000000000){
            cnt += (min(n, (long long)999999999999) - 1000000000 + 1) * 3;
        }
        if(n >= 1000000000000){
            cnt += (min(n, (long long)999999999999999) - 1000000000000 + 1) * 4;
        }
        if(n >= 1000000000000000){
            cnt += (n - 1000000000000000 + 1) * 5;
        }
        return cnt;
    }
};