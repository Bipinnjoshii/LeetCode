class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();

        vector<int>freq(26,0);

        for(int i = 0 ; i < n ; i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                freq[text[i] - 'a']++;
            }
        }

        int sum = 0;
        int mini = INT_MAX;

        for(int i = 0; i < 26; i++){

            if(i == 'b' - 'a'){
                mini = min(mini,freq[i]);
            }
            else if(i == 'a' - 'a'){
                mini = min(mini,freq[i]);
            }
            else if(i == 'l' - 'a'){
                if(freq[i] >= 2){
                    mini = min(mini,freq[i]);
                }
                else{
                    return 0;
                }
            }
            else if(i == 'o' - 'a'){
                if(freq[i] >= 2){
                    mini = min(mini,freq[i]);
                }
                else{
                    return 0;
                }
            }
            else if(i == 'n' - 'a'){
                mini = min(mini,freq[i]);
            }
        }

        return mini;
    }
};