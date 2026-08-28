class Solution {
public:
    int minimumChairs(string s) {
        int sum = 0;
        int maxi = INT_MIN;
        for(int i = 0 ;i < s.size() ; i++){
            if(s[i] == 'E'){
                sum++;
            }
            else{
                sum--;
            }

            maxi = max(maxi,sum);
        }
        return maxi;
    }
};