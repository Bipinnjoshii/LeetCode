class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index;

        if(ruleKey == "type"){
            index = 0;
        }
        else if(ruleKey == "color"){
            index = 1;
        }
        else{
            index = 2;
        }

        int count = 0;

        for(auto item : items){
            if(item[index] == ruleValue){
                count++;
            }
        }

        return count;
    }
};