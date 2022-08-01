#include <stdio.h>

int main(){
    // where the value assigned to each child is the number of minutes they've been born after each other
    // the index represents one of the sentouplets. 0-7
 int child[7] = {0, 8, 1, 24, 32, 40, 48}; 


int i, Age_order = 1;


for (i = 0; i<7; i++){
    printf("since child %d was born the %d minutes after, they are the %d in order of eldest\n", i, child[i], Age_order);
    Age_order++;
    }
}