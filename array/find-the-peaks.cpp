class Solution {
public:
    vector<int> findPeaks(vector<int>& mountains) {
        int n = mountains.size();
        vector<int>peak;
        for(int i = 1 ; i < n-1 ; i++){
            if(mountains[i] > mountains[i-1]  &&  mountains[i] > mountains[i+1]){
                peak.push_back(i);
            }
            else{
                continue;
            }
        }
        return peak;
    }
};