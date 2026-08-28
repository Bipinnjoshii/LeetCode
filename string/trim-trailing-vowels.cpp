bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}
class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();

        while(n > 0 && isVowel(s[n-1])){
            s.pop_back();
            n--;
        }
        return s;
    }
};