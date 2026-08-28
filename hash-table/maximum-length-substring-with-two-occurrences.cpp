class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();

        unordered_map<char,int>mpp;

        int i = 0;
        int j = 0;
        int maxi = INT_MIN;


        while(j < n){

            if(mpp[s[j]] < 2){
                mpp[s[j]]++;
                j++;
            }
            else{
                mpp[s[i]]--;
                i++;
            }

            maxi = max(maxi,j-i);
        }

        return maxi;
    }
};