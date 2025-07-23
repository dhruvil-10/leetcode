class Solution {
public:

    

    int climbStairs(int n) {
        long int answer = 0 , temp1 = 1 , temp2 = 2 ;

        if(n==1) return 1;
        if(n==2)return 2;
        
    for(int i = 0 ; i<n-2 ; i++)
    {
            answer = temp1 + temp2;

            temp1 = temp2; 
            temp2 = answer;
    }
    return answer ;
        
    }
};