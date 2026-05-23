class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int>freq(128,0);

        for(char x:s){
            freq[x]++;
        }
        int ans = 0;
        for(char c = 'a' ; c <= 'z' ; c++){
            char m = 'z' - (c - 'a');

            if(c<m){
                ans += abs(freq[c] - freq[m]);
            }
        }

        for(char c = '0' ; c <= '9' ; c++){
            char n = '9' - (c - '0');

            if(c<n){
                ans += abs(freq[c] - freq[n]);
            }
        }
        return ans;
    }
};