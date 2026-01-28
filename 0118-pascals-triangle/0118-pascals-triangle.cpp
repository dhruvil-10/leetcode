class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if(numRows == 0) return {};
        if(numRows == 1) return {{1}};
        vector<vector<int>>  answer;


        for(int i=0; i<numRows ; i++)
        {
            vector <int> newrow(i+1,1);

            for(int j = 1 ; j<i ; j++)
            {
                newrow[j] = answer[i-1][j-1] + answer[i-1][j];
            }
                answer.push_back(newrow);

        }
            return answer;

        }
    
};