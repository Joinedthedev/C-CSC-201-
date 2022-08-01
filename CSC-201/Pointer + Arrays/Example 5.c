#include <stdio.h>

int main(){
    long int v[6] = {1,2,3,4,5,6};
    long int *p;
    p=v;

    printf("%d\n", *p);

    p++;
    printf("%d\n", *p);

    p+=4;
     printf("%d\n", *p);

    return 0;
}