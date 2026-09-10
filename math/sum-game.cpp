class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int lcnt = 0;
        int rcnt = 0;
        int lsum = 0;
        int rsum = 0;


        for(int i = 0 ; i < n ; i++){
            if(num[i] == '?'){
                if(i < n/2){
                    lcnt++;
                }
                else{
                    rcnt++;
                }
            }
            else{
                if(i < n/2){
                    lsum += num[i] - '0';
                }
                else{
                    rsum += num[i] - '0';
                }
            }
        }

        int totalcnt = lcnt + rcnt;

        if(totalcnt % 2 == 1){
            return true;
        }

        int left = 2 * lsum + (9 * lcnt);
        int right = 2 * rsum + (9 * rcnt);

        if(left == right){
            return false;
        }

        return true;
    }
};