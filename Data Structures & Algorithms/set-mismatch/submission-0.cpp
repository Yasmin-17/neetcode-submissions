class Solution {
   public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> freqmap;
        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            freqmap[nums[i]]++;
        }
        for (auto i : freqmap) {
            if (i.second == 2) {
                answer.push_back(i.first);
            }
        }
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        int actualsum = sum - answer[0];
        int missingnumber = ((nums.size() * (nums.size() + 1)) / 2) - actualsum;
        answer.push_back(missingnumber);
        return answer;
    }
};