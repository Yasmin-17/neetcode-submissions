class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int answer = INT_MIN;
        int consecutive_count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                consecutive_count++;
            }
            else{
                consecutive_count = 0;
            }
            answer = max(answer, consecutive_count);
        }
        return answer;
    }
};