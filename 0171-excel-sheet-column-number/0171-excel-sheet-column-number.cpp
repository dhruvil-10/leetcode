class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int answer = 0;

        for (int i = columnTitle.length() - 1; i >= 0; i--)
        {

            int temp = columnTitle[i] - 64;
            int pointer = columnTitle.length() - 1 - i;
            int temp2 = pow(26,pointer);
            int temp3 = temp * temp2;
            answer += temp3;
        }

            return answer;

    }

     

};