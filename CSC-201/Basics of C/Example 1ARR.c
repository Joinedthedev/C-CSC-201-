#include <stdio.h>

int main(){
    int aa [] = {10, 20, 30, 45, 67, 56, 74};
    int *i, *j;
    i = &aa[1];
    j = &aa[5];

    printf("%d %d",j-i, *j-*i);

}
