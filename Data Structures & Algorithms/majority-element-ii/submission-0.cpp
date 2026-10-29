class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n;i++) {
            mpp[nums[i]]++;
        }
        for(auto i : mpp) {
            if(i.second > n/3) {
                answer.push_back(i.first);
            }
        }
        return answer;
    }
};