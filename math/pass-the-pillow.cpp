class Solution {
public:
    int passThePillow(int n, int time) {

        int pass = time + 1;

        if(pass > n){
            return(n - (pass - n));
        }
        
        return pass;
    }
};