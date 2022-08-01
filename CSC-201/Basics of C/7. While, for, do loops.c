#include <stdio.h>

/*loops are essentially blocks of code that keep running until a condition is met. Generally there are two types of loops
in every programmng langauge namely, WHILE & FOR loops. C is primitive so theres three. The addition is Do-While loops.
They are executed as follows:

int main(){
int x = 1;
int counter = 0;
while (x<=7){  
  ++counter;
    ++x;
   }

printf("The loop ran %d times", counter);
}
*/
/*
int main(){
    int M1;                 
    for(M1=1; M1<=5; M1++){    // to lazy to explain this code. I'm sorry
        printf("%d", M1);
    }
}

*/

/*
int main(){
    int Counter= 0;
    do                  /* so the do while loop executes the code before the condition at least once. 
                        Normally the code wouldn't execute since our condition is false. 
                        But because we are using a do while loop, the code will always execute at least once 
                        before checking the condition
    {
        printf("%d", Counter);
        ++Counter;

    } while (Counter>5); // This is false, yet the code above will still execute once.
    
} */