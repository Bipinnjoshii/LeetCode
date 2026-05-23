class Solution {
public:

    int check(vector<int>& nums,int mid){
        int val = 0;

        for(int i = 0 ; i < nums.size(); i++){
            val += (nums[i]+mid-1)/mid;
        }
        return val;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;;
        int n = nums.size();

        if(n>threshold){
            return -1;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            maxi = max(maxi,nums[i]);
        }

        int low = 1;
        int high = maxi;

        while(low<=high){
            int mid = low+(high-low)/2;
            int val = check(nums,mid);

            if(val<=threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};