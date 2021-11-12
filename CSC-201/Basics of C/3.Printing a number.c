#include <stdio.h>

// a simple program that prints the variable to the console with some text
int main () {
    int number = 5;
    printf("My number is: %d", number);// printf is  used to print to the console.
    
    /* ^^^^In C, we must specify the format of each variable we intend to use in the printf statement. We then 
    place the format specifier in the place we want it to appear in the string. In this case We placed "%d at the 
    end of the string because the format of our variable is int, and we also want the value of our variable to 
    appear at the end after "is:". */
return 0;
}