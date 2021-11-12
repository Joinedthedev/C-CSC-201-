#include <stdio.h>
/*This program prints numbers 0-100 by continously incrementing our variable Z by one inside a While loop as long as
the value of z is less than or equal to 100*/ 

int main(){
    int z = 0; 

while (z<= 100){ // our condition which is to keep running the loop running as long as z is <=100

 printf("%d\n", z);   //Prints each increment of z by 1 on a new line
    z++;              // Increments z by 1. z++= z + 1
    }
    return 0;
}