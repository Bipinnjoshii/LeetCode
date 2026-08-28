class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(auto x:s){
            freq1[x - 'a']++;
        }

        for(auto x:t){
            freq2[x - 'a']++;
        }

        for(int i = 0 ; i < 26 ; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }

        return true;
    }
};