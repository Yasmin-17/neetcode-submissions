class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mpp;
        unordered_map<char, int> ballon = {{'b',1}, {'a',1}, {'l',2}, {'o',2},{'n',1}};
        for(int i=0; i<text.size(); i++) {
            mpp[text[i]]++;
        }
        int res = INT_MAX;
        for(auto i : ballon) {
            res = min(res, mpp[i.first]/i.second);
        }
        return res;
    }
};