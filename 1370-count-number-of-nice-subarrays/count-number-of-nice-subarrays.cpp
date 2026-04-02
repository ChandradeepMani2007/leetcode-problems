class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if (k < 0)
            return 0;
        int l = 0, sum = 0, count = 0;
        for (int r = 0; r < nums.size(); r++) {
            sum += (nums[r] % 2); // count odd numbers
            while (sum > k) {
                sum -= (nums[l] % 2);
                l++;
            }
            count += (r - l + 1);
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        // Exactly k odds = AtMost(k) - AtMost(k-1)
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};