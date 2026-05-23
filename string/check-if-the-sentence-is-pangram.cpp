class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();

        vector<int>seen(26,0);

        for(auto x:sentence){
            seen[x-'a'] = 1;
        }
        for(auto c:seen){
            if(c == 0){
                return false;
            }
        }
        return true;
    }
};