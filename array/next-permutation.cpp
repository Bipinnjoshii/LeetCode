class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index = -1;
        int n = arr.size();

        for(int i = n-2 ; i>= 0 ; i--){
            if(arr[i]<arr[i+1]){
                index = i;
                break;
            }
        }
    //sab elements bade hai apne se phele se [5 4 3 2 1 ] so next premutation reverse hoga [1 2 3 4 5]
        if(index == -1){
            reverse(arr.begin(),arr.end());
            return;
        }

        for(int i = n-1; i>index ; i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
    }
};