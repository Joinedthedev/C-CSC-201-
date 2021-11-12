#include <stdio.h>
// a program that determines wheteher the no you input is odd or even
int main (){

int input;

printf("Enter your no");
scanf("%d", &input);

if (input%2==0){ /* "%" in this case represents modulus which gives you the remainder of a dividend and a divisor.
the input is the dividend and the 2 is the divisor. The syntax translates into "if the remainder of input divided
by 2 is equal to zero"*/
    
    printf("Your number is even");
}
else{
    printf("Your number is odd");
    }
}