#include <stdio.h>

int main(){
    int array[]= {1,2,3,4,5};
    int i, s= 0;
    for(i =0; i<5; i++){
        s += array[i];
        
    }
    int Average= s/5;
    printf("%d is the average", Average);
}