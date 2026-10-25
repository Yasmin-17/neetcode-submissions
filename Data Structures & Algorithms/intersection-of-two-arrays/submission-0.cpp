class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> answer;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        for(int i=0; i<nums1.size(); i++) {
            if(s2.find(nums1[i]) != s2.end()) {
                answer.insert(nums1[i]);
            }
        }
        for(int i=0; i<nums2.size(); i++) {
            if(s1.find(nums2[i]) != s1.end()) {
                answer.insert(nums2[i]);
            }
        }
        return vector<int>(answer.begin(), answer.end());
    }
};