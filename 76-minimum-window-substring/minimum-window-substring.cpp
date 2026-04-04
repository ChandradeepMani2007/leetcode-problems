class Solution {
public:
    string minWindow(string s, string t) {
        int freq[256] = {0};         
        int l = 0, r = 0, minLen = INT_MAX;  
        int sIndex = -1;
        int count = 0;               
        int m = t.size();            

        for (int i = 0; i < m; i++)
            freq[t[i]]++;            

        while (r < s.size()) {       
            if (freq[s[r]] > 0)
                count++;              
            freq[s[r]]--;
            r++;                      

            while (count == m) {
                if (r - l < minLen) { 
                    minLen = r - l;
                    sIndex = l;
                }
                freq[s[l]]++;         
                if (freq[s[l]] > 0)  
                    count--;
                l++;
            }
        }

        return sIndex == -1 ? "" : s.substr(sIndex, minLen); 
    }
};