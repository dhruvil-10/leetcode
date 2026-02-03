class Solution {
public:
    int reverse(int x) {
        bool tag = false;

        if(x <= -2147483648) return 0;

        if(x<0 && x>-2147483648) {
            x*=-1;
            tag = true;
        }
         long int rev= 0 , temp1;
        while(x!=0)
        {
           if (rev*10 >2147483647) return 0;
            temp1 = x%10;
                rev = 10*rev + temp1;

                x/=10;
        }

        

        if(tag) return rev*(-1);

            return rev;



    }
};