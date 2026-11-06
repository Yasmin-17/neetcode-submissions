class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        char hash[256] = {0};

        for(char i : allowed) {
            hash[i]++;
        }
        int count = 0;
        for(int i=0; i<words.size(); i++) {
            bool ok = true;
            for(char j : words[i]) {
                if(hash[j] == 0) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                count++;
            }
        }
        return count;
    }
};