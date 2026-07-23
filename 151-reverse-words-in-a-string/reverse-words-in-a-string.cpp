class Solution {
public:
    string reverseWords(string s) {
        // story
        // 1.reverse the whole string
        reverse(s.begin(), s.end());
        int i = 0;
        // hamare hero r and l honge jo reverse karenge words ko
        int l = 0, r = 0;
        int n = s.length();
        while (i < n) {
            while (i < n && s[i] !=' ') {
                s[r] = s[i];
                i++;
                r++;
            }
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        s = s.substr(0,r - 1);
        return s;
    }
};