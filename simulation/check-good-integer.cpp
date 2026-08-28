class Solution {
public:
    bool checkGoodInteger(int n) {
        int num = n;
        int sum = 0;
        int sqsum = 0;
        while(num > 0){
            int digit = num%10;
            sum  = sum + digit ;
            sqsum = sqsum + (digit*digit);
            num = num/10;
        }

        if(sqsum - sum >= 50){
            return true;
        }
        return false;
    }
};