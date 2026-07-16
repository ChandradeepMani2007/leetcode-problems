class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int maxProfit = 0;
        int bestbuy = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] > bestbuy) {
                maxProfit = max(maxProfit, nums[i] - bestbuy);
            }
            bestbuy = min(bestbuy, nums[i]);
        }
        return maxProfit;
    }
};