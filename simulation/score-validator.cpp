class Solution {
public:
    vector<int> scoreValidator(vector<string>& s) {
        int score = 0;
        int counter = 0;

        int n = s.size();

        for(int i = 0 ; i < n ; i++){
            if(s[i] == "0" ||s[i] == "1" ||s[i] == "2" ||s[i] == "3" ||s[i] == "4" ||s[i] == "5" ||s[i] == "6" ){
                score = score + stoi(s[i]);
            }
            else if(s[i] == "WD" ||s[i] == "NB"){
                score = score + 1;
            }
            else{
                counter = counter + 1;
                if(counter == 10){
                    break;
                }
                
            }
        }
        return {score,counter};
    }
};