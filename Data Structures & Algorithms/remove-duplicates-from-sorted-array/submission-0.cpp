class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        for(int i : s) {
            cout << i << "   ";
        }
        int count=0;
        for(int i : s) {
            nums[count] = i;
            count++;
        }
        return count;
    }
};