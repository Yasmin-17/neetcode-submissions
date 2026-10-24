class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> answer;
        int n = grid.size() * grid[0].size();
        unordered_map<int,int> freqmap;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid.size(); j++) {
                freqmap[grid[i][j]]++;
            }
        }
        for(auto i : freqmap) {
            if(i.second == 2) {
                answer.push_back(i.first);
            }
        }
        for(int i=1; i<=n;i++) {
            if(freqmap.find(i) == freqmap.end()) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};