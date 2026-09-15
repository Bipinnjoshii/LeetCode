class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool xOverlap;
        if (rec1[0] < rec2[2] && rec2[0] < rec1[2]) {
            xOverlap = true;
        } else {
            xOverlap = false;
        }

        bool yOverlap;
        if (rec1[1] < rec2[3] && rec2[1] < rec1[3]) {
            yOverlap = true;
        } else {
            yOverlap = false;
        }

        if (xOverlap && yOverlap) {
            return true;
        } else {
            return false;
        }
    }
};