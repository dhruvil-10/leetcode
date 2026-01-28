class Solution {
public:
    vector<int> getRow(int rowIndex) {

        if(rowIndex == 0) return {1};
        if(rowIndex == 1) return {1,1};
        vector<vector<int>>  answer;


        for(int i=0; i<rowIndex+1 ; i++)
        {
            vector <int> newrow(i+1,1);

            for(int j = 1 ; j<i ; j++)
            {
                newrow[j] = answer[i-1][j-1] + answer[i-1][j];
            }
                answer.push_back(newrow);

        }
            return answer[rowIndex];

        }

        
    
};