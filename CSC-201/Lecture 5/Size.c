#include <stdio.h>
#define SIZE 30

int main(){
    int a[SIZE] = {1,2,3,45,6,7,8,90,7,5,34,5,67,4,3,5,6,7,3,};
    int i;
    int sum =0;

    for (i = 0; i<SIZE; i++){
    sum+=a[i];
    }
    printf("%d", sum);
    return 0;
}