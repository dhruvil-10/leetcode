class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string answer = "";

        char char1;

        if (columnNumber == 1)
            return "A";

        while (columnNumber != 0)
        {

            if (columnNumber % 26 == 0)
            {
                char1 = 26 + 64;
                answer.insert(0, 1, char1);

                columnNumber /= 26;
                --columnNumber;
            }
            else
            {
                char1 = columnNumber % 26 + 64;
                answer.insert(0, 1, char1);

                columnNumber /= 26;
            }
        }

        return answer;
    }
};