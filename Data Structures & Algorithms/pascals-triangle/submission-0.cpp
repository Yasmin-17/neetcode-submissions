class Solution {
   public:
    int generatencr(int n, int r) {
        int ans = 1;
        for (int i = 0; i < r; i++) {
            ans = ans * (n - i);
            ans = ans / (i + 1);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int row = 1; row <= numRows; row++) {
            vector<int> temp;
            for (int col = 1; col <= row; col++) {
                temp.push_back(generatencr(row - 1, col - 1));
            }
            answer.push_back(temp);
        }
        return answer;
    }
};