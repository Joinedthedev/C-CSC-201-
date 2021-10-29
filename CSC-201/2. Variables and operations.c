#include <stdio.h>

int main(){
//you must specify the data type of each variable in C when using it

/*
int x;// accepts integers
float y;//accepts decimals
double x;//accepts bigger decimals(like really big)
char z;//accepts characters
*/
int x = 7, y = 20;
printf("%d", x+y); /* this is a regular equation that adds the value of x and y. Another way to do this is to store
the value of x+y before printing it to the console. %d specifies the format of the second argument we pass through
printf. Check the notes for the different format specifiers */

// this time we stored all the values from the equations into variables before printing into the console
int sum = x + y;
int product = x*y;
int difference = x-y;
float quotient =(float) x/y; 
printf(" SUM:%d\n Product:%d\n Difference:%d\n quotient:%f\n", sum, product, difference, quotient);
return 0;
}

