#include <stdio.h>

// REMEMBER TO COMMENT OUT WHATEVER FUNCTIONS YOUR NOT TRYING TO RUN BY USING "/* */" OTHERWISE THE CODE WONT RUN

// Time to explore if, if else, and nested if

// this program will print a statement based on whether the condition is true or false

//FORMAT FOR IF, ELSE IF, ELSE


//  if (/* condition */)
//    {   
//        /* code */
//    }

//  else if (/* condition */)
//  {
//      /* code */
//  }

//  else
//  {
    /* code */
//  }

int main(){
    double x = 24.34;//double is another data type in c for decimals. Its practically the same as float but more precise.
                    
    if (x == 24.34){
        printf("X is equal to %lf", x);
    }
return 0;
}

//^^the above program executed the if block of code because the condition is true. X is indeed = 24.34.

int main() {
    int x = 7, y = 75;
if (x >= 3 && y <=456) { 
    printf("Its true innit?");

}
else{
    printf("Its false innit?");

}
return 0;
}


/* the program above executed the first block of code since the condition was true. x(7) is greater than or equal 
to three and y(75) is less than or equal to 456. But what happens when its false?*/

/*
int main (){
    int A = 8, B = 9;
    
    if (A == B) {
    printf("A is deff equal to B. No cap.");
    }

    else{
        printf("Yikes. A is deff not equal to B.");
    }
return 0;
}*/

 //Since a is not equal to b the condition is false, therefore the else block was executed. 

/*nested if works in a similar manner. The computer keeps checking for the conditions to be true. If it finds none
of the else if statemEnts to be true the else block is executed */

/*
int main(){
    int x = 5, y = 25, z= 40;
    if (x == 4){
        printf("October's Very Own");
    }

    else if(x==y || x==z) {  //!= (not equal to)
        printf("Lebron is the best!");
    }
    
    else if(x!=y && z<=40){
        printf("Man U fans are fighting demons rn");//29/10/21 ole is still there
    }
    
    else{
        printf("Cool Beans!");
    }
return 0;

}
*/

/*the program above executed the third block of code because the conditions were true. x and y are not equal and z
is indeed less than or equal to 40. Else if can be used to continously to check diff conditions as the name implies. 
Think of it as "if its not this then do this. If its not that then do this, and if its not ANY of them then do this"(Else block at the end)
*/

