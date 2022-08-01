#include <stdio.h>
#include <string.h>

int main(){
 /*   char name[] = "Muhammed";
    int i = 0;
    while (i <= 7){
        printf("%c", name[i]);
        i++;
    }*/



    char name[] = "Muhammed";
    int i = 0;

    while (name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }



char name[] = "";
printf("Enter your full name:");

gets (name);
printf("Hello ");
puts (name);
}