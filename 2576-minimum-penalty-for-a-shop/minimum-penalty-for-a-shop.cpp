class Solution {
public:
    int bestClosingTime(string customers) {
        int score = 0;
        int maxscore = 0;
        int besthour = 0;
        for (int i = 0; i < customers.length(); i++) {
            if (customers[i] == 'Y') {
                score += 1;
            } else {
                score -= 1;
            }
            if (score > maxscore) {
                maxscore = score;
                besthour = i + 1;
            }
        }
        return besthour;
    }
};