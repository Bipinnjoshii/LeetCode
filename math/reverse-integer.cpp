class Solution {
public:
    int reverse(int n) {
      int rem ;
      int num= n;
        long sum = 0;
        while(num!=0){
        rem = num%10;
        if(sum>INT_MAX/10 || (sum == INT_MAX/10 && rem >7)){
            return 0;
        }if(sum<INT_MIN/10 || (sum == INT_MIN/10 && rem < -8)){
            return 0;
        }
        sum = (sum*10) + rem;
        num = num/10;
        }
        
        return sum;
    }
};