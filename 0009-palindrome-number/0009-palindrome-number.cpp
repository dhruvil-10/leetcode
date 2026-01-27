class Solution {
public:
    bool isPalindrome(int x) {
                long int rev=0,copy = x;  

                if (x<0) return false;
                if (x<10) return true;
        while (x!=0)
        {
            long int temp1 = x%10;
            rev = (rev*10) + temp1;
                x/=10;
        }    

        if(rev == copy)return true;
        
        return false;
    }
};