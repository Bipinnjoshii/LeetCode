class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        vector<int>arr;
        arr.push_back(nums[0]);
        for(int i = 1;i<n ; i++){
            if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
                cnt++;
            }
        }
        for(int i = 0;i<cnt ; i++){
                nums[i]=arr[i];
        }
        return cnt;
    }
};