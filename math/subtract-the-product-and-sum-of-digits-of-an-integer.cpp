class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int sum = 0;
        int mul = 1;
        while(num!=0){
            int digit = num%10;
            sum +=  digit;
            mul *= digit;
            num = num/10;
        }

        return (mul-sum);
    }
};