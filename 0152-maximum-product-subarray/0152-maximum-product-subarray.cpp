class Solution {
public:
    int maxProduct(vector<int>& nums) {

            int product, max_product=nums[0];

        for(int  i = 0 ; i<nums.size() ; i++)
        {
                product= nums[i];
            for(int j=i ; j<nums.size(); j++)
            {
                       if(j != i ) product *= nums[j];

                        max_product = max(max_product , product);
            }

        }

        return max_product;
        
    }
};