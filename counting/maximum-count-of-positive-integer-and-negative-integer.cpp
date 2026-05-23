class Solution {
public:

    int firstpositive(vector<int>&nums){
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){

            int mid = low+(high-low)/2;

            if(nums[mid]>0){
                ans = mid;
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }

    int greaterthanzero(vector<int>&nums){

        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();

        while(low<=high){

            int mid = low+(high-low)/2;

            if(nums[mid]>=0){
                ans = mid;
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        
        int neg = greaterthanzero(nums);
        int pos = n-firstpositive(nums);

        return(max(pos,neg));
    }
};