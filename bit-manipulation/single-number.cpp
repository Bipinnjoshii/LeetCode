class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int single = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            single = single ^ arr[i];
        }
      return single;
    }
};