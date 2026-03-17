class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;
        int currentEnd = 0;   // end of range we can reach with 'jumps' jumps
        int farthest = 0;     // farthest we can reach from indices within current range

        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            // when we reached the end of the current range, we must jump
            if (i == currentEnd) {
                ++jumps;
                currentEnd = farthest;
                if (currentEnd >= n - 1) break; // already can reach end
            }
        }
        return jumps;    
    }
};