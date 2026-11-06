class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp_s;
        unordered_map<char, int> mpp_t;
        for(char i : s) {
            mpp_s[i]++;
        }
        for(char i : t) {
            mpp_t[i]++;
        }
        for(auto i : mpp_s) {
            if(mpp_t.find(i.first) == mpp_t.end()) {
                return false;
            }
            else if(mpp_t[i.first] != mpp_s[i.first]) {
                return false;
            }
        }
        for(auto i : mpp_t) {
            if(mpp_s.find(i.first) == mpp_s.end()) {
                return false;
            }
            else if(mpp_t[i.first] != mpp_s[i.first]) {
                return false;
            }
        }
        return true;
    }
};
