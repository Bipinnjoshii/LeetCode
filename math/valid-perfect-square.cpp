class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x==0){
            return false;
        }
        for(long long i= 1 ; i * i <= x ; i++){
            if(i * i == x){
               return true;
            }
        }
        return false;
        }
};