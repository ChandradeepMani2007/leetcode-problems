class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;

        while (r < n) {
            if (lastIndex[s[r]] != -1) {
                if (lastIndex[s[r]] >= l) {
                    l = lastIndex[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxLen = max(len, maxLen);
            lastIndex[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};