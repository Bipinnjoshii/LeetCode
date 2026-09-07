class Solution {
public:

    int multiply(int num){
        int mul = 1;
        
        while(num!=0){
            int digit = num % 10;

            mul = digit * mul;

            num = num/10;
            
        }

        return mul;
    }
    int smallestNumber(int n, int t) {

        int num = n;
        while(multiply(num) % t != 0){
            num++;
        }

        return num;
    }
};