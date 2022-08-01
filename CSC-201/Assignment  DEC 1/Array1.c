#include <stdio.h>
int main(){
    int array[5] = {67, 74,56, 90, 87};
    int ar1, Ar2;

    printf("Enter first array replacement");
    scanf("%d", &ar1);

    printf("Enter second array replacement");
    scanf("%d", &Ar2);

    array[2] = ar1;
    array[4]= Ar2;

printf("%d %d", array[2], array[4]);
}