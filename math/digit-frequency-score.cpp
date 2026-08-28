class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mpp;
        int num = n;
        while(num>0){
        int digit = num % 10;
        mpp[digit]++;
        num = num/10;
        }
        int sum = 0;
        for(int i = 0 ; i < mpp.size() ; i++){
            sum += i*mpp[i];
        }
        return sum;
    }
};