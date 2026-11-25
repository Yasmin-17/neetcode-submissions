class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        // step-1 -> Map the elements with their frequencies
        unordered_map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }
        // step-2 -> Now put the elements with same frequencies in one bucket
        // since multiple elements can have the same frequencies I am taking a vector<vector<int>>
        vector<vector<int>> bucket(n+1);
        // step-3 -> Now traverse through the map and put the elements into the same bucket
        for(auto i : mpp) {
            int element = i.first;
            int freq = i.second;
            bucket[freq].push_back(element);
        }
        // since we want the top k freq elements we have to traverse from right to left
        set<int> answer; // To store answer(since it is asking for unique)
        for(int i=n; i>=0; i--) {
            if(bucket[i].size()==0) {
                continue;
            }
            else {
                while(bucket[i].size() > 0 && k>0) {
                    answer.insert(bucket[i].back());
                    bucket[i].pop_back();
                    k--;
                }
            }
        }
        vector<int> ans(answer.begin(),answer.end());
        return ans;
    }
};
