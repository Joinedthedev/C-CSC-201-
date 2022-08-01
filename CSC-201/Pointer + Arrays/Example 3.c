#include <stdio.h>

int main (){
    int num[] = {24, 34, 12, 44, 56, 17};

    int i, *j;

    j = &num[0]; // assigns adress of zeroth element
    for( i = 0; i<=5; i++){
        printf("\naddress = %u", j);
        printf(" element = %d", *j);
        j++;
    }
    return 0;
}