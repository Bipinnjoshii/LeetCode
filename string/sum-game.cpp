class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int lcnt = 0;
        int rcnt = 0;
        int lsum = 0;
        int rsum = 0;

        int cnt = 1;

        for(int i = 0 ; i < n ; i++){

            if(num[i] == '?'){

                if(cnt % 2 == 1){
                    num[i] = '9';
                }

                cnt++;
            }

        }


        for(int i = 0 ; i < n ; i++){

            if(i < n/2 && num[i] == '?'){
                lcnt++;
            }

            if(i>=n/2 && num[i] == '?'){
                rcnt++;
            }

        }


        for(int i = 0 ; i < n ; i++){

            if(i < n/2 && num[i] != '?'){
                lsum += num[i] - '0';
            }

            if(i >= n/2 && num[i] != '?'){
                rsum += num[i] - '0';
            }

        }

        //lsum += lsum + (lcnt * 9);
        //rsum += rsum + (rcnt * 9);

        if(rcnt > lcnt){
            if(rsum > lsum){
                return true;
            }
            
            return false;
        }
        else if(lcnt > rcnt){
            if(lsum > rsum){
                return true;
            }
            return false;
        }
        
        return false;
    }
};