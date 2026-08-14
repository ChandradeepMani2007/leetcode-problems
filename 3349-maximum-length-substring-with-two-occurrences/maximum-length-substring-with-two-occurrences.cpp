class Solution {
public:
    int maximumLengthSubstring(string s) {
       int n = s.length();
        int left = 0;
        int ans = 0;

        vector<int> freq(256, 0);

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

            // If any character occurs more than 2 times
            while (freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans; 
    }
};