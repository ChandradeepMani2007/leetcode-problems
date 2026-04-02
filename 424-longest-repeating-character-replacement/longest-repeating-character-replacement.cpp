class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxLen = 0, maxF = 0;
        int count[26] = {0};
        while (r < s.size()) {
            count[s[r] - 'A']++;
            maxF = max(maxF, count[s[r] - 'A']);
            if ((r - l + 1) - maxF > k) {
               count[s[l] - 'A']--;
                maxF = 0;
                l = l + 1;
            }
            if ((r - l + 1) - maxF <= k)
                maxLen = max(maxLen, r - l + 1);
                 r++;
        }
        return maxLen;
    }
};