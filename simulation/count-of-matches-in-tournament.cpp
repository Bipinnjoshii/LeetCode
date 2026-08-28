class Solution {
public:
    int numberOfMatches(int n) {
        
        return n-1;
    }
};


/*class Solution {
public:
    int numberOfMatches(int n) {
        int cnt = 0;
        int num = n;
        int matches = 0;
        int teams = n;
        while(num>1){
            if(num % 2 == 0){
                matches = num/2;
                teams = num/2;
                cnt += matches;
                num = num/2;
            }
            else{
                matches = (num-1)/2;
                teams = (num-1)/2+1;
                cnt += matches;
                num = num/2 +1;
            }
        }
        return cnt;
    }
};  */