class Solution {
public:
    int passThePillow(int n, int time) {
        int cnt = time + 1;

        int ans = cnt % n;

        if(ans == 0){
            return n;
        }
        return ans;
    }
};