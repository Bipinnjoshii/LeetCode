class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        sort(nums1.begin(),nums1.end());
        
        bool even = true;
        int el = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums1[i] % 2 != 0){
                even = false;
                el = nums1[i];
                break;
            }
        }

        if(even){
            return true;
        }
        else{
            for(int i = 0 ; i < n ; i++){
                if(nums1[i] % 2 == 0){
                    if(nums1[i] - el >= 1){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};