class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, vector<string>> mpp;
        for(int i=0; i<strs.size(); i++) {
            string key_map = strs[i];
            sort(key_map.begin(), key_map.end());
            mpp[key_map].push_back(strs[i]);
        }
        for(auto i : mpp) {
            answer.push_back(i.second);
        }
        return answer;
    }
};
