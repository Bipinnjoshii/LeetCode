bool isprime(int n){
    if(n<=1){
        return false;
    }

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int num = n;
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum = (sum * 10) + digit;
            num = num/10;
        }

        int r = sum;
        
        int ans = 0;
        for(int i = min(n,r) ; i<=max(n,r) ; i++){
            if(isprime(i)){
                ans += i;
            }
        }

        return ans;
    }
};