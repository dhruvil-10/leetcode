class Solution {
public:
    int maxArea(vector<int>& height) {

        int l = 0 ;
         int  r = height.size()-1;
         int maxAr = 0 ; 

         while(l<r)
         {

                int h = min(height[l] , height[r]);
                int p = r-l;
                int area = h*p;
            if(height[l] > height[r])
            {
                r--;
            }
            else l++;

            maxAr = max(maxAr , area);
 
         } 

         return maxAr;
        
    }
};