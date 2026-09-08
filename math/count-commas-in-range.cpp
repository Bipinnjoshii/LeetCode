class Solution {
public:
    long long countCommas(int n) {
        long long cnt = 0;
        
        if(n<1000){
            return cnt;
        }
        else if(n>=1000 && n<=100000){
            cnt = n-999;
        }

        return cnt;
    }
};