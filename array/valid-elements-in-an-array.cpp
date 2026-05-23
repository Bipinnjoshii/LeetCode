class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
         int n = nums.size();

        vector<int> leftmax(n);
        vector<int> rightmax(n);
        vector<int> ans;

        leftmax[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            leftmax[i] = max(leftmax[i-1], nums[i]);
        }

        rightmax[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            rightmax[i] = max(rightmax[i+1], nums[i]);
        }


        for(int i = 0 ; i < n ; i++){

            bool leftok = false;

            if(i == 0 || nums[i]>leftmax[i-1]){
                leftok = true;
            }

            bool rightok = false;

            if(i == n-1 || nums[i] > rightmax[i+1]){
                rightok = true;
            }

            if(leftok == true || rightok == true){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};