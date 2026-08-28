class Solution {
public:
    int strStr(string h, string n) {

        int sh = h.size();
        int m = n.size();

        if(h.find(n) == string::npos){
            return -1;
        }
        else{
            return h.find(n);
        }
    }
};