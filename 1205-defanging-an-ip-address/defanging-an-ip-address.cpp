class Solution {
public:
    string defangIPaddr(string character) {

        string ans = "";
        for(char ch : character) {
            if(ch == '.') {
                ans +="[.]";
            } else {
                ans += ch;
            }
        }
        return ans;
    }
};