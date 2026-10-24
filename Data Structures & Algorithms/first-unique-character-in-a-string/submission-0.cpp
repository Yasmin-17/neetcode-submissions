class Solution {
public:
    int firstUniqChar(string s) {
        int index=-1;
        unordered_map<char, int> freqcountmap;
        for(int i=0; i<s.size(); i++) {
            freqcountmap[s[i]]++;
        }
        for(int i=0; i<s.size(); i++) {
            if(freqcountmap[s[i]] == 1) {
                index = i;
                break;
            }
        }
        return index;
    }
};