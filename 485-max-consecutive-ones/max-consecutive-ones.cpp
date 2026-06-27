class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
           if (nums[i] == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};