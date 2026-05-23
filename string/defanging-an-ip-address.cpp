class Solution {
public:
    string defangIPaddr(string address) {
        
        string res = "";

        for(auto x:address){
            if(x == '.'){
                res = res + '[' + '.' + ']';
            }
            else{
                res = res + x;
            }
        }
    return res;
    }
};