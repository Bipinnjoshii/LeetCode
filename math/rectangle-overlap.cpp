class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        if(rec1[2] > rec2[0] && rec1[1] < rec2[3]){
            return true;
        }

        return false;
    }
};