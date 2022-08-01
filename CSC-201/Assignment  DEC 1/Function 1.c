#include <stdio.h>

float KE (int mass, float velocity){

    float z = 0.5*mass*(velocity*velocity);

    return z;

}

int main(){
    int m;
    float v;
    printf("Enter mass");
    scanf("%d", &m);

    printf("Enter velocity");
    scanf("%f", &v);
    
    
    float k = KE(m,v);
printf("Your KE is %f", k);
}