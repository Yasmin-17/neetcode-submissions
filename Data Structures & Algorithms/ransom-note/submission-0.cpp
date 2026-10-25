class Solution {
   public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freqcountmap1;
        unordered_map<char, int> freqcountmap2;
        for (auto i : ransomNote) {
            freqcountmap1[i]++;
        }
        for (auto i : magazine) {
            freqcountmap2[i]++;
        }

        for(auto i : freqcountmap1) {
            if(freqcountmap2[i.first] < i.second) {
                return false;
            }
        }
        return true;
    }

};