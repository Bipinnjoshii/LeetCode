class Solution {
public:
    int maxProduct(int n) {
        vector<int>dig;

        int num = n;
        int first = INT_MIN;
        int second = 0;

        while(num >  0){
            int digit = num % 10;
            if(digit > first){
                second = first;
                first = digit;
            }
            else if(digit > second){
               second = digit;
            }
            num /= 10;
        }

        return first * second;
    }
};