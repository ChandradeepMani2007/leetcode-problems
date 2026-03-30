class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0, maxSum = 0;
        int n = cardPoints.size();

        // Take first k elements
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }

        maxSum = lsum;

        int rindex = n - 1;

        // Slide window
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];        // remove from left
            rsum += cardPoints[rindex];   // add from right
            rindex--;

            maxSum = max(maxSum, lsum + rsum);
        }

        return maxSum;
    }
};