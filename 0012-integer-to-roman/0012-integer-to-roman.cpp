class Solution {
public:
    string intToRoman(int num) {

       int temp =num,len=1,count = 0;
       string ans;

       while(temp>=10)
       {
        len*=10;
        temp/=10;
       }
       
       for(int i =len ; i>=1 ; i/=10 )
       {
           
                    if (i==1000)                // for M
                    {           
                    count = num/i;
                    ans.append(count,'M');
                    num %= i;
                    
                    }
                
                   else if (i == 100)           // for c nad d
                   {
                    count = num/i;
                    
                    if  (count == 9 ) 
                    {
                        ans.append(1,'C');
                        ans.append(1,'M');

                    }  

                    else if(count == 4) {
                        ans.append(1,'C');
                        ans.append(1,'D');
                    }

                    else if(count<5) ans.append(count,'C'); 

                    else
                    {
                        ans.append(1,'D');
                        ans.append(count-5,'C');
                    }
                    num %= i ;
                    
                    }
               
                    else if  (i == 10)          //for X L
                    {
                    
                    count = num/i;

                    if  (count == 9 ) 
                    {
                        ans.append(1,'X');
                        ans.append(1,'C');

                    }  

                    else if(count == 4) 
                    {
                        ans.append(1,'X');
                        ans.append(1,'L');

                    }
                    else if(count<5) ans.append(count,'X');     
                    else
                    {
                        ans.append(1,'L');
                        ans.append(count-5,'X');
                    }
                    num %= i ;
                    
                    }
              
                   else{    
                    if  (num == 9 ) 
                    {
                        ans.append(1,'I');
                        ans.append(1,'X');

                    }                
                    else if(num == 4)
                     {
                        ans.append(1,'I');
                        ans.append(1,'V');

                    }
                    else if(num<5) ans.append(num,'I');
                    else
                    {
                        ans.append(1,'V');
                        ans.append(num-5,'I');
                    }
                    
                    }
                    
        
       }
       return ans;

        
    }
};