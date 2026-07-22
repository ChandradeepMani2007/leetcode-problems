class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int i = 0; // ransomNote pointer
        int j = 0; // magazine pointer

        while (i < ransomNote.size() && j < magazine.size()) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            }
            else if (ransomNote[i] > magazine[j]) {
                j++;
            }
            else {
                // ransomNote[i] < magazine[j]
                return false;
            }
        }

        return i == ransomNote.size();
    }
};