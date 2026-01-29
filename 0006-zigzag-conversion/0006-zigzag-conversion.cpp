class Solution {
public:
    string convert(string s, int numRows) {

        

            if (numRows == 1 || numRows >= s.size())return s;

        string ans = "";
        int cycle = 2 * numRows - 2;

        for (int row = 0; row < numRows; row++) {
            for (int j = row; j < s.size(); j += cycle) {

                ans += s[j];

                int squ2 = j + cycle - 2 * row;
                if (row != 0 && row != numRows - 1 && squ2 < s.size())
                    ans += s[squ2];
            }
        }
        return ans;
        
        
    }
};