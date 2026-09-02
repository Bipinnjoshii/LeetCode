class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        bool flag = true;
        
        int oddelement = 0;

        for(int i = 0; i < n ; i++){
            if(nums1[i]%2 != 0){
                oddelement = nums1[i];
                flag = false;
                break;
            }
        }

        if(flag){
            return true;
        }
        
        for(int i = 0 ; i < n ; i++){
            if(nums1[i] % 2 == 0){
                nums1[i] = nums1[i] - oddelement;
            }
        }
        
        bool even = false;

        for(int i = 0 ; i < n ; i++){
            if(nums1[i] % 2 == 0){
                even = true;
                break;
            }
        }

        if(even){
            return false;
        }

        return true;
    }
};