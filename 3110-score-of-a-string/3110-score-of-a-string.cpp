class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i=0 ; i<s.length()-1 ; i++ )

            {
                    int n1 = static_cast<int>(s[i]);
                    int n2 = static_cast<int>(s[i+1]);


                        score+=abs(n1-n2);

            }
            return score;


        
    }
};