class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& t) {
        int n = drones.size();
        int m = drones[0].size();

        int mini = INT_MAX;
        int idx = -1;

        for(int i = 0 ; i < n ; i++){

                int x = drones[i][0];
                int y = drones[i][1];
                int range = drones[i][2];

                int mdistance = abs(x - t[0]) + abs(y - t[1]);
                if(mdistance <= range){
                    if(mdistance < mini){
                        mini = mdistance;
                        idx = i;
                    }
                }
            }

        return idx;
    }
};