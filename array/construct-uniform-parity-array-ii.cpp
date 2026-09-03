class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int miniodd = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            if(nums1[i] % 2 != 0){
                miniodd = min(miniodd,nums1[i]);
            }
        }

        if(miniodd != INT_MAX){
            for(int i = 0 ; i < n ; i++){
                if(nums1[i] % 2 == 0){
                    if(nums1[i] - miniodd >= 1){
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