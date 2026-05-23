class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        vector<int>freq(101,0);
        vector<int>ans;
        for(auto x:bulbs ){
            freq[x]++;
        }

        for(int i = 1; i <= 100 ; i++){
            if(freq[i] % 2 == 1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};