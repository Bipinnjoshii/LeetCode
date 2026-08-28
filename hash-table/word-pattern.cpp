class Solution {
public:
    bool wordPattern(string p, string s) {
        int n = p.size();
        int m = s.size();
        vector<string>str;

        int i = 0;
        int j = 0;

        while(i<m){
            j = i;
            while( j < m && isalnum(s[j])){
                j++;
            }
            str.push_back(string(s.begin()+i,s.begin()+j));

            i = j+1;
        }

        if(n!=str.size()){
            return false;
        }

        unordered_map<char,string>mpp1;
        unordered_map<string,char>mpp2;

        for(int i = 0 ; i < n ; i++){
            if(mpp1.find(p[i])==mpp1.end() && mpp2.find(str[i]) == mpp2.end()){
                mpp1[p[i]] = str[i];
                mpp2[str[i]] = p[i];
            }
            else{
                if(mpp1[p[i]]!=str[i] || mpp2[str[i]]!=p[i]){
                    return false;
                }
            }
        }
        return true;
    }
};