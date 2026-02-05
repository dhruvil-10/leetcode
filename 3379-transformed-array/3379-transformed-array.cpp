class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int size1 = nums.size();
        vector <int> result(size1,0);

        if (size1 == 1) return nums;
            for( int i = 0 ; i <size1 ; i++)
            {
                int steps = nums[i] ; 
                if (steps > 0 )             //MOVE TO RIGHT
                {
                    
                    result[i] = nums[(i+steps) % size1];

                }

                else if(steps == 0 )            //STAY THERE
                {
                    result[i] = nums[i];
                }
                else 
                {
                    steps*=-1;                  //MOVE LEFT
                    if(i-steps >=0)
                    {
                        result[i] = nums[i-steps];      // NO CIRCULAR
                    }
                    else 
                    {
                        steps %= size1;
                        
                                  //CIRCULAR LEFT
                           int steps_final =size1+(i-steps);
                            result[i] = nums[steps_final%size1];
                           
                    }
                }

            } 

            return result;
        
    }
};