class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(101, 0);   // constraint: 1 <= nums[i] <= 100
        int count = 0;

        for (int x : nums) {
            count += freq[x];  // add existing occurrences
            freq[x]++;         // update frequency
        }

        return count;
    }
};