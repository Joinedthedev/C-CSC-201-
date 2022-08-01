#include <stdio.h>// includes the libary that has standard input output functions(printf, scanf etc)

// A simple program that prints hello world to the console. A die hard ritual.


/* In C, we generally want our function to return an integer, so that if it encounters any error it will return a 
value other than zero. Therefore we say 'int' main. And also everything is always in a function for some reason lol.*/

int main () { 
    printf("Hello world");
return 0; /*Return zero is not required in a literal sense because your code will still run without it, 
but its a good practice to mark your code as essentially error free. Therefore, I strongly reccomend you use it*/
}
