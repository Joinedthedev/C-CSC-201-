#include <stdio.h>

int main(){
    int i;
    int num[] = {1,2,3,4,5,6,7,8,5,6,9};
    for(i=0; i<=5; i++)
    {
        printf("\nelement no. %d", i);
        printf("Adress = %u", &num[i]);
    }
return 0;
}