class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int cnt5 = 0;
        int cnt10 = 0;
        int cnt20 = 0;
        for(int i = 0 ; i < n ; i++){
            if(bills[i] == 5){
                cnt5++;
            }
            else if(bills[i] == 10){
                if(cnt5 < 1){
                    return false;
                }
                else{
                    cnt10 += 1;
                    cnt5 -= 1;
                }
            }
            else if(bills[i] == 20){
                if(cnt5>=1 && cnt10>=1){
                    cnt5-=1;
                    cnt10-=1;
                    cnt20+=1;
                }
                else if(cnt5>=3){
                    cnt5-=3;
                    cnt20+=1;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};