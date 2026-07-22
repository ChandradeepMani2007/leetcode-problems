class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int m = ransomNote.length();
        int n = magazine.length();

        int i = 0; // ransomNote pointer
        int j = 0; // magazine pointer

        while (i < m && j < n) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            } else if (ransomNote[i] > magazine[j]) {
                j++;
            } else {
                return false;
            }
        }
        return i == m;
    }
};