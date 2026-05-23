class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 1;
        int high = n-2;
        if(n==1){
            return 0;
            }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                low = mid+1;
            }
            /*to check if the nums[mid] is in the pit and there is no rise or fall so we do any:
            1.move right
            2.move left 
            because there will surely be next or previous peek in the array if its in the pit
            */
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};