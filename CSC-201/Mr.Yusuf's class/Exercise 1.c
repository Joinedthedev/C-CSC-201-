#include <stdio.h>
// A program that writes your full name and uni name

int main(){
    char name[]= "";
    char uni[]= "";
    printf("Name: ");
    scanf("%s", &name);

    printf("University: ");
    scanf("%s", &uni);

    printf("Name: %s\n University:%s\n", name, uni); //redundant but does what the question asks c

}

