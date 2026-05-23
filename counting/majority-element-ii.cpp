class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int cnt1=0;
        int cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        int n = arr.size();
        
        for(int i = 0 ; i < n ; i++){
            if(cnt1 == 0 && el2 != arr[i]){
                cnt1 = 1;
                el1 = arr[i];
            }
            
            else if(cnt2 == 0 && el1 != arr[i]){
                cnt2 = 1;
                el2 = arr[i];
            }
            
            else if(arr[i] == el1){
                cnt1++;
            }
            
            else if(arr[i] == el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        //verify the candidates
        cnt1 = 0; 
        cnt2 = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==el1){
                cnt1++;
            }
            else if(arr[i]==el2){
                cnt2++;
            }
        }
        
        vector<int>ans;
        if(cnt1>n/3){
            ans.push_back(el1);
        }
        if(cnt2>n/3){
            ans.push_back(el2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};