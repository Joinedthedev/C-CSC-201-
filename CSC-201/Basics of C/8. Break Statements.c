#include <stdio.h>
/*Almost forgot to explain a break statement lol. 

Like what its name says, a break statement breaks you out a loop. The
program below would normall run infintely but with the help of a break statement we can ensure that when x==10,
we jump out of the loop to the next line of code outside of the loop.*/

int main(){
    int x;
    for (x=1; x!=0; ++x){
        printf("Help! I can't stop!!\n");
        if (x==10){ 
            break;
        }
    }    
    printf("Phew! that was a close one!\n");
return 0;
}
