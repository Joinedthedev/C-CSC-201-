#include <stdio.h>

int main(){
    
    int a = 10;
    int *p;

    p = &a; // Address of a
    *p =12;

    printf("%u\n", p);
    printf("%d\n", a);
    printf("This da size: %d", sizeof(int));
}