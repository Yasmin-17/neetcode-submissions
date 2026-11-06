class Solution {
   public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }

        vector<pair<int, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            } else {
                return a.second < b.second;
            }
        });

        vector<int> ans;
        for (auto& p : v) {
            ans.insert(ans.end(), p.second, p.first);
        }
        return ans;
    }
};