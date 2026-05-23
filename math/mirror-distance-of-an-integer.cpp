class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int sum = 0;

        while(num!=0 ){
            int digit = num %10;
            sum = (sum*10) + digit;
            num = num/10;
        }

        return abs(n-sum);
    }
};