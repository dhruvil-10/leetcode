class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
            int answer=0;
        for(auto a: operations)
        {
                if(a == "++X" || a == "X++" ) answer++;

                else answer--;
        }
        return answer;
        
    }
};