class Solution {
public:
    long long countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int cnt = 0;
        int r = n-1000;
        int comma = 0;
        for(int i = 0 ; i <= r ; i++){
        if(n+i >= 1000){
            int num = n;
            while(num>1){
                num = num/10;
                cnt += 1;
            }
            if(cnt>=3 || cnt<=6){
                comma += 1;
            }
            else{
                comma += 2;
            }
        }
        }
        return comma;
    }
};