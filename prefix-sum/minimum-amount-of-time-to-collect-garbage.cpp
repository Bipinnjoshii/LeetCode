class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int t = n-1;

        int sum = 0;

        for(int i = 0 ; i < t ; i++){
            sum += travel[i];
            travel[i] = sum;
        }

        int total = 0;
        int lastG = -1, lastM = -1, lastP = -1;

        for (int i = 0; i < n; i++) {
            for (char ch : garbage[i]) {
                total++;

                if (ch == 'G')
                    lastG = i;
                else if (ch == 'M')
                    lastM = i;
                else
                    lastP = i;
            }
        }

        if(lastG > 0){
            total += travel[lastG-1];
        }
        if(lastM > 0){
            total += travel[lastM-1];
        }
        if(lastP > 0){
            total += travel[lastP-1];
        }

        return total;
    }
};