class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int>nums2(n);
        bool flag = true;
        int idx = -1;

        for(int i = 0; i < n ; i++){
            if(nums1[i]%2 != 0){
                flag = false;
                break;
            }
        }

        if(flag){
            return true;
        }
        
        for(int i = 0 ; i < n-1 ; i++){
            if(nums1[i] % 2 != 0){
                nums2[i] = nums1[i];
            }
            else{
                nums2[i] = nums1[i] - nums1[i+1];
            }
        }
        nums2[n-1] = nums1[n-1];

        if(nums2[n-1] % 2 == 0){
            nums2[n-1] = nums1[n-1]-nums1[n-2];
        }

        cout << nums2[n-1] << endl;

        bool even = false;

        for(int i = 0 ; i < n ; i++){
            if(nums2[i] % 2 == 0){
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