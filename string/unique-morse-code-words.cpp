class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        
        if(n == 1){
            return 1;
        }

        vector<string>code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<char,string>mpp;

        set<string>st;

        for(int i = 0 ; i < 26 ; i++){
            mpp[i + 'a'] = code[i];
        }

        for(int i = 0; i < n ; i++){
            string str = " ";
            for(auto s:words[i]){
                str += code[s - 'a'];
            }
            
            st.insert(str);
        }

        int ans = st.size();

        return ans;
    }
};