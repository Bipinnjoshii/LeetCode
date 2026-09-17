class Solution {
public:
    int passThePillow(int n, int time) {

        int pass = (time+1) % n;

        if(pass == 0){
            return n;
        }
        
        int ans = n - pass;
        return ans;
    }
};