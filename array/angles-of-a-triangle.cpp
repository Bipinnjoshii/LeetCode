class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];

        if (a + b <= c || b + c <= a || a + c <= b) {
            return {};
        }

        vector<double> res(3);

        res[0] = acos((b*b + c*c - a*a) / (2*b*c)) * (180.0 / M_PI);
        res[1] = acos((a*a + c*c - b*b) / (2*a*c)) * (180.0 / M_PI);
        res[2] = acos((a*a + b*b - c*c) / (2*a*b)) * (180.0 / M_PI);

        sort(res.begin(),res.end());

        return res;
    }
};