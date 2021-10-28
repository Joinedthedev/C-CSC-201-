#include <stdio.h>
// a program that determines wheteher the no you input will br odd or even
int main (){

int input;

printf("Enter your no");
scanf("%d", &input);

if (input%2==0){
    printf("Your number is even");
}
else{
    printf("Your number is odd");
}
}