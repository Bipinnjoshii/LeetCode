class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        
        if(n == 1){
            return 1;
        }
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        int maxidx = -1;
        int minidx = -1;
        
        
        for(int i= 0 ; i < n ; i++){
            if(nums[i] <= mini){
                mini = nums[i];
                minidx = i;
            }    
            
            if(nums[i] > maxi){
                maxi = nums[i];
                maxidx = i;
            }
        }
        
        int size = abs(maxidx - minidx)-1;
            
        int low = min(maxidx,minidx); 
        int high = max(maxidx,minidx);
        
        if(size == 0){           
        
        if(high+1 < n-low){
                return (high+1);
            }
            else{
                return(n-low);
            }
         } 
                
        int ans1 = (low+1) + (n-high);
        int ans2 = high+1;
        int ans3 = n - low;
        
        int res = min(ans1,ans2);
        
        return min(res,ans3);
    }
};