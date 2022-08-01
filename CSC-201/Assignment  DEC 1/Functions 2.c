#include <stdio.h>
int Pali(int n)    
{    
int r,sum=0,tempVAR;     
tempVAR=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(tempVAR==sum)    
printf(" Number entered is a palindrome number");    
else    
printf("Number entered is not a palindrome number");   
return 0;  
}   

int main(){
    int p;
   printf("Enter no");
   scanf("%d", &p);
    Pali(p);
}