#include <stdio.h>

// REMEMBER TO COMMENT OUT WHATEVER FUNCTIONS YOUR NOT TRYING TO RUN BY USING "/* */" OTHERWISE THE CODE WONT RUN

/*Essentially, a switch case is basically an else if. The main difference aside from the syntax is the fact that you
can only test one constant condition. 

A nested if can test more than one condition. In the example below, we're only using Z-1 as our main case.
We can only test for Z-1, whatever Z is. I've integrated a scanf inside this example so play around and see. 

compare it with the nested if down below and see if you can spot the differences
*/

//P.S. Switch only reads values of int type.

/*
int main(){
  int  Z;
  scanf("%d", &Z);
    switch (Z-1) // this is where the constant expression goes. This never changes.
    {
    case -1:                   // Basically saying if Z-1 == -1 then print feeding fish same logic applies below
        printf("\nFeeding Fish"); 
        break;
    
    case 0:
        printf("\nwedding grass");
        break;
    
    case 1:
        printf("\nmending roof");

    default:                        // the default acts as an "else" statement
        printf("\n okay it works");
        break;
    }
return 0;
} 
*/
int main(){
    int z;
    scanf("%d", &z);  

    //As you can see below, by using an else if we can test mutiple conditions as opposed to one with a Switch case

    if  (z-1 > 67) {
        printf("Hard work pays off innit?");
    }
    else if (z==5){
        printf("Amala is overated");
    }
    else if (z <-4){
    printf("Indeed, time is running fast.");
    }

    else{
        printf("My work here is done.");
    }
}
