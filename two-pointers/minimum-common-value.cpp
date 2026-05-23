class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int mini = INT_MAX;
        int i = 0, j = 0;

        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                int common = nums1[i];
                mini = min(mini,common);
                i++;
                j++;
            }
            else{
                if(nums1[i]<nums2[j]){
                    i++;
                }
                else{
                    j++;
                }

            }
                
        }
        if(mini == INT_MAX){
            return -1;
        }
        return mini;
    }
};