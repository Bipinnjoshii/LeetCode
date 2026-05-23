class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        int check = -1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0){
                check = 1;
            }
        }

        if(check == -1){
            return 1;
        }
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0){
                mpp[nums[i]]++;
            }
        }

        for(int i = 1 ; i <= maxi ;i++){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
        }
        return maxi+1;
    }
};