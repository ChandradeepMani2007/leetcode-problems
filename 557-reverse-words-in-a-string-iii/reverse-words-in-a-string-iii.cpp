class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token, result;

        while (ss >> token) {
            reverse(token.begin(), token.end());

            if (!result.empty())
                result += " ";

            result += token;
        }

        return result;
    }
};