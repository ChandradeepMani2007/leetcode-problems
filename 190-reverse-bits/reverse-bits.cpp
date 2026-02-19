class Solution {
public:
    int reverseBits(int n) {
        if (n == 0)
            return 0;
        int result = 0;
        for (int i = 1; i <= 32; i++) {
            result <<= 1;                // Shift result left
            result = (result | (n & 1)); // Add last bit of n
            n >>= 1;                     // Shift n right
        }

        return result;
    }
};