class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int maxi = 0;
        for(int x:candies){
            maxi = max(maxi,x);
        }

        for(int y:candies){
            if(y+extraCandies >= maxi){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};