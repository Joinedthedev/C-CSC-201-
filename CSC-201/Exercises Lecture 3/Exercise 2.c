#include <stdio.h> 

/*a program that determines whether a bonus is given to an employee at an organization based on how many years they have worked at
said organization

In a rather ideal situation the best thing to do would to use the <time.h> Library as it will allow the use the current date and time
based on the local system rather than the user inputting said date and time theirselves. It is more accurate and full proof.*/

int main(){
    int currentYear, yearEmployed;
    int bonus = 2500;

printf("What year is it");
scanf("%d", &currentYear); // takes user input of the current year

printf("When did you join this organization"); // takes user input of when they joined
scanf("%d", &yearEmployed);
int yearsEMPLOYED = currentYear - yearEmployed; // calculates the number of years they've been employed at the organization

if (yearEmployed > 3) { /*an if statement that checks whether the year they've been employed is greater than three, which if true applies
                            a $2500 bonus*/
    printf("Congrats! You've earned a $%d bonus", bonus);
    }
return 0;
}


