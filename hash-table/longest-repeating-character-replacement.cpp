class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        if(n == 1){
            return 1;
        }
        vector<int>freq(26,0);

        int i = 0;
        int j = i+1;

        int maxf = 0;
        int ans = 0;

        freq[s[i] - 'A']++;

        while(j < n){
            freq[s[j] - 'A']++;

            maxf = max(maxf,freq[s[j] - 'A']);

            if((j-i+1) - maxf > k){
                freq[s[i] - 'A']--;
                i++;
            }

            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};