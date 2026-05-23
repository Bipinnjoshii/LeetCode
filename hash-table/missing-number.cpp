class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int N = arr.size();
        int xor1 =0;
        int xor2 =0;
        for(int i = 0 ; i < N ; i++){
            xor2 = xor2 ^ arr[i];
            xor1 = xor1^(i);
        }
        xor1 = xor1 ^ N;
        return xor1^ xor2;
    }
};