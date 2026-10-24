class Solution {
   public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;
        for (int i = 0; i < nums2.size(); i++) {
            mpp1[nums2[i]] = i;
        }
        for (int i = 0; i < nums1.size(); i++) {
            mpp2[nums1[i]] = i;
        }
        vector<int> temp1;
        for (int i = 0; i < nums1.size(); i++) {
            if (mpp1.find(nums1[i]) == mpp1.end()) {
                temp1.push_back(nums1[i]);
                mpp1[nums1[i]] = i; 
            }
        }
        result.push_back(temp1);
        vector<int> temp2;
        for (int i = 0; i < nums2.size(); i++) {
            if (mpp2.find(nums2[i]) == mpp2.end()) {
                temp2.push_back(nums2[i]);
                mpp2[nums2[i]] = i; 
            }
        }
        result.push_back(temp2);
        return result;
    }
};