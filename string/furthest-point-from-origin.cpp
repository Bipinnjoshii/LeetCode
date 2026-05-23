class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int cntr = 0;
        int cntl = 0;
        int cntu = 0;
        int maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(moves[i] == 'L'){
                cntl++;
            }
            else if(moves[i] == 'R'){
                cntr++;
            }
            else{
                cntu++;
            }
        }
        
        maxi = max(cntr,cntl);
        if(maxi == cntr){
            cntu *= 1;
        }
        else{
            cntu *= -1;
        }

        return abs(cntr-cntl+cntu);
    }
};