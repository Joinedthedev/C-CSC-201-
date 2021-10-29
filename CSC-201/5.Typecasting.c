#include <stdio.h>
// REMEMBER TO COMMENT OUT WHATEVER FUNCTIONS YOUR NOT TRYING TO RUN BY USING "/* */" OTHERWISE THE CODE WONT RUN

//Typecasting is basically converting the the data type of a variable.. I'll give three instances.

// a program takes the quotient 2 integers 

/*
int main(){
    int x = 10, y = 3;
    int z = x/y;

    printf("%d", z);
return 0;
}
/*when you run this code it gives you 3 instead of 3.33. C automatically floors the value since the data type of our 
result(z) is an int. This method is inefficient because it does not give you an accurate value.*/

/*
int main(){
    int x = 10, y = 3;
    float z= x/y;

    printf("%f", z);

return 0;
}
*/

/* the program above converts the result to a float sucessfully but it outputs the answer as 3.00000. The conversion
takes place AFTER the result is obtained. So this method is also inefficient*/

int main(){
    int x = 10, y = 3;
    float z = (float) x/y;

    printf("%f", z);

return 0;
}

/* the above program outputs 3.333333 which is what we wanted. It converts the x/y before storing it to z. This
is the efficient method of type casting.*/