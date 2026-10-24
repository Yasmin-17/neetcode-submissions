class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> answer;
        int n = nums.size();
        vector<int> hash(n+1, 0);
        for(int i : nums) {
            hash[i]++;
        }
        for(int i=1; i<=n; i++) {
            if(hash[i] == 0) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};