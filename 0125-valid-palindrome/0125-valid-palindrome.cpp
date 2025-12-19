class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        
        for (char x : s) {
            if (isalnum(x)) {
                str.push_back(tolower(x));
            }
        }

        string str1 = str;
        reverse(str.begin(), str.end());

        return str1 == str;
    }
};
