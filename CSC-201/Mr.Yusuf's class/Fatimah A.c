#include<stdio.h>
/*int main(){
    printf("Fatimah Alfa\n");
    printf("CyberSecurity");
    return 0;
}*/

int main(){
    int p,t;
    float r;

    printf("Enter Principle");
    scanf("%d", &p);

    printf("Enter rate of interest");
    scanf("%f", &r);

    printf("Enter time");
    scanf("%d", &t);

float SI= (float)(p*t*r)/100;
printf("Simple interest is %f", SI);
}