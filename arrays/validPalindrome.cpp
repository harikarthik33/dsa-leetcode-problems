class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";

        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }

        string rev = str;

        reverse(rev.begin(), rev.end());

        for(int i = 0; i < str.length(); i++) {
            if(str[i] != rev[i]) {
                return false;
            }
        }

        return true;
    }
};