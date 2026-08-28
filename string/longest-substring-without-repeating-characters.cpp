class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        if(n == 0){
            return 0;
        }
        vector<int>freq(128,0);

        int i = 0;
        int j = i+1;
        int ans = 1;

        freq[s[i]]++;

        while(i <= j &&j < n){

            if(freq[s[j]] == 0){
                freq[s[j]]++;
                ans = max(ans,j-i+1);
                j++;
            }
            else{
                freq[s[i]]--;
                i++;
            }
        }

        return ans;
    }
};