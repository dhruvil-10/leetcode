class Solution {
public:
    int minimumOperations(vector<int>& nums) {
            int ope = 0;
        for(int i = 0 ; i< nums.size() ; i++)
        {
                int a = nums[i];
                
            int mod1 = a%3 , mod2 = 3-a%3;
            
            if ( mod2<0) mod2 * -1 ;
            
            if(mod1 > mod2)
            {
                ope+= mod2 ;
            }
            else{
                ope+=mod1;
            }

        }

        return ope;
        
    }
};