class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int>common(26,0);

        for(char ch:words[0]){
            common[ch-'a']++;
        }

        for(int i = 1 ; i < words.size() ; i++){
            vector<int>freq(26,0);

            for(char ch:words[i]){
                freq[ch - 'a']++;
            }

            for(int j = 0 ; j < 26 ; j++){
                common[j] = min(common[j],freq[j]);
            }
        }

        vector<string>res;

        for(int i = 0 ; i < 26 ; i++){
            while(common[i]--){
            res.push_back(string(1,i+'a'));
            }
        }

        return res;
    }
};