#include <stdio.h>
int main(){
    int Mr_X, Mr_Y, Mr_Z;
    printf("Enter Mr.X's age:");
    scanf("%d", &Mr_X);

    printf("Enter Mr.Y's age:");
    scanf("%d", &Mr_Y);

    printf("Enter Mr.Z's Age:");
    scanf("%d", &Mr_Z);

    if (Mr_X > Mr_Y && Mr_X > Mr_Z){
    printf("Mr.X is the oldest");
    }
    else if (Mr_Y > Mr_X && Mr_Y > Mr_Z){
    printf("Mr.Y is the oldest");
    }

    else{
        printf("Mr.Z is the oldest");
    }
return 0;
}