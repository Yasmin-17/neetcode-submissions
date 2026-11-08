class Solution {
   public:
    bool isPalindrome(string s) {
        string newstring;
        for (char i : s) {
            if (i >= 65 && i <= 90) {
                newstring = newstring + (char)(i + 32);
            } else if ((i >= 97 && i <= 122) || (i >= 48 && i <= 57)) {
                newstring = newstring + i;
            }
            else {
                continue;
            }
        }
        cout << newstring << endl;
        for (int i = 0; i < newstring.size() / 2; i++) {
            if (newstring[i] != newstring[newstring.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
