class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        long long maximumSum = windowSum;
        for (int i = k; i < n; i++) {
            windowSum += nums[i] - nums[i - k];
            maximumSum = max(maximumSum, windowSum);
        }
        return (double)maximumSum / k;
    }
};