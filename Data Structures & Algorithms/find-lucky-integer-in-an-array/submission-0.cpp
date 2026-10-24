class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mpp;
        for(int i=0; i<arr.size(); i++) {
            mpp[arr[i]]++;
        }
        int ans = INT_MIN;
        for(auto i : mpp) {
            if(i.second == i.first) {
                ans = max(ans, i.first);
            }
        }
        if(ans == INT_MIN) {
            return -1;
        }
        return ans;
    }
};