class Solution {
   public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }
        bool isspecial = true;
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] % 2 != 0) {
                return false;
            }
        }
        for (int i = 1; i < nums.size(); i += 2) {
            if (nums[i] % 2 != 1) {
                return false;
            }
        }
        return true;
    }
};