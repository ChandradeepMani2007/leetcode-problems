class Solution {
public:
    int binaryGap(int n) {
       int last = -1;      // position of last seen '1'
        int maxGap = 0;
        int position = 0;   // current bit position
        
        while (n > 0) {
            if (n & 1) {  // if current bit is 1
                if (last != -1) {
                    maxGap = max(maxGap, position - last);
                }
                last = position;
            }
            n >>= 1;  // shift right
            position++;
        }
        
        return maxGap;  
    }
};