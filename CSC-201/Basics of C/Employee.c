#include <stdio.h>

int main(){
    struct Employee{
        char names[40];
        float salary;
        int hours;

    };

    struct Employee E[11];
    int i;
    for(i=0; i<2; i++){
        scanf("%s %f %d", &E[i].names, &E[i].salary, &E[i].hours);
    }

    for(i=0; i<2; i++){
        printf("%s %f %d", E[i].names, E[i].salary, E[i].hours);
    }

    if (E[i].hours >=){

    }

}