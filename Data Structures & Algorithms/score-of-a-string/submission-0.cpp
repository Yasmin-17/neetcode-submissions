class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i=0; i<s.size()-1;i++) {
            for(int j=i+1; j<=i+1; j++) {
                score = score + abs(s[j] - s[i]);
            }
        }
        return score;
    }
};