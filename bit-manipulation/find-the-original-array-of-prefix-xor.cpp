class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int first = pref[0];
        for(int i = 1 ; i < n ; i++){
        int second = pref[i];

        pref[i] = first ^ pref[i];
            first = second;
        }

        return pref;
    }
};