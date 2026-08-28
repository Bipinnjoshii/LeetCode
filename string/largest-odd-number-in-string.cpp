class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int maxi = INT_MIN;
        string str;
        for(int i = n-1 ; i >= 0 ; i--){
            
            if(num[i]%2!=0){
                str = string(num.begin(),num.begin()+i+1);
                return str;
            }
            
        }
        return ("");
    }
};