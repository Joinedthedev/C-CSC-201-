#include <stdio.h>

// REMEMBER TO COMMENT OUT WHATEVER FUNCTIONS YOUR NOT TRYING TO RUN BY USING "/* */" OTHERWISE THE CODE WONT RUN

/*Go to literally just directs the execution part of your if statement to another area in the code. Where ever you see
goto(name), it's literally telling the computer to go to the (name) you assigned to the goto.

Goto can be useful like when you want to jump out of a deep nested if but just stay away form it in general.
Please. */


int main(){
    int goals;
    printf("Enter the number of goals scored against Nigeria");
    scanf("%d", &goals);

    if (goals <=5)
    goto YES; // Tells the computer to jump to where the goto statment is. Our goto 
    
    else {
        printf("All the soccer players should learn c\n");
    }
    YES:  // as you can see we write the execution for the if statement using the variable name reffered to in the goto
    printf("Get ready for next match!"); 
}