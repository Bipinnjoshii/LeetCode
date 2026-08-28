class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m){
            return false;
        }

        vector<int>a(26,0);
        vector<int>b(26,0);

        for(auto x:s1){
            a[x - 'a']++;
        }

        int i = 0;
        int j = 0;

        while(j < m){
            b[s2[j] - 'a']++;

            if(j-i+1 > n){//verifying if the window size is larger than the size of string s1 and reducing the size of the window
                b[s2[i] - 'a']--;
                i++;
            }

            if(a==b){
                return true;
            }
            j++;
        }
        return false;
    }
};