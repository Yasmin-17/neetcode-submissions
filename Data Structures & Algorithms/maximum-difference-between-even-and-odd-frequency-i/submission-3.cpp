class Solution {
   public:
    int maxDifference(string s) {
        int oddfreq = INT_MIN;
        int evenfreq = INT_MAX;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }
        for (auto i : mpp) {
            if (i.second % 2 == 1) {
                oddfreq = max(oddfreq, i.second);
            } else if (i.second % 2 == 0) {
                evenfreq = min(evenfreq, i.second);
            }
        }
        return oddfreq - evenfreq;
    }
};