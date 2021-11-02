#include <stdio.h>
int main(){
    int currentYear;
    int yearEmployed;
    int bonus = 2500;

printf("What year is it");
scanf("%d", &currentYear);

printf("When did you join this organization");
scanf("%d", &yearEmployed);
int yearsEMPLOYED = currentYear - yearEmployed;

if (yearEmployed > 3) {
    printf("Congrats! You've earned a $%d bonus", bonus);
    }
return 0;
}
