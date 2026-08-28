class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        
        int max = k + n;
        int sum = 0;
        for(int i = 1 ; i <= max ; i++){
            if(abs(n - i) <= k && (n & i) == 0){
                sum += i;
            }
            else{
                continue;
            }
        }
        return sum;
    }
};