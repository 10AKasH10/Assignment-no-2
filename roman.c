#include <stdio.h>
long tobinary(int);
int main(){
   int num;
   long bno;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("unary number is:");
for(int i=0;i<num;i++){
        printf("I");
    }
        
     bno = tobinary(num);
    
     printf("\nRoman numerals: ");    
    while(num != 0)
    {

        if (num >= 1000)       
        {
           printf("m");
           num -= 1000;
        }

        else if (num >= 900)   
        {
           printf("cm");
           num -= 900;
        }        

        else if (num >= 500)   
        {           
           printf("d");
           num -= 500;
        }

        else if (num >= 400)   
        {
           printf("cd");
           num -= 400;
        }

        else if (num >= 100)   
        {
           printf("c");
           num -= 100;                       
        }

        else if (num >= 90)    
        {
           printf("xc");
           num -= 90;                                              
        }

        else if (num >= 50)    
        {
           printf("l");
           num -= 50;                                                                     
        }

        else if (num >= 40)    
        {
           printf("xl");           
           num -= 40;
        }

        else if (num >= 10)    
        {
           printf("x");
           num -= 10;           
        }

        else if (num >= 9)     
        {
           printf("ix");
           num -= 9;                         
        }

        else if (num >= 5)     
        {
           printf("v");
           num -= 5;                                     
        }

        else if (num >= 4)     
        {
           printf("iv");
           num -= 4;                                                            
        }

        else if (num >= 1)     
        {
           printf("i");
           num -= 1;                                                                                   
        }

    }
   printf("\nThe Binary value is : %ld\n",bno);
    
    return 0;
}
long tobinary(int num){
   long bno=0,sem,f=1;
   while(num != 0){
      sem = num % 2;
      bno = bno + sem * f;
      f = f * 10;
      num = num / 2;
   }
   return bno;;
}
