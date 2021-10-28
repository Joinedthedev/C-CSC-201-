#include <stdio.h> // adding libaries??

 int main () {
    int myNo;// first you define the variable. This is what will be attached to your scanf.
    
    printf("I see you are trying to learn scan f. Enter a number if so!"); /* The print f statment that comes before
    the scanf is what the console will prompt the user. So when this code is ran, the console will prompt the statement above.*/
    
    scanf("%d", &myNo); /* The easiest way to understand the correlaion between the scanf and printf coming from python is to 
    think of it as being linked to the print statement above and providing an input function to it. This scanf takes input and stores
    it to the whatever pre defined  important to add the '&' to the variable after specifying the data type when using scanf 
    or else you'll get an error*/

    printf("I see. So your number is: %d", myNo);

return 0;/* this return doesnt really serve any function other than telling the computer your code works. When your exit code is zero
it generally means there are no errors. Your return value is not equal to your output value*/
} 

int main (){
    //a program that takes user input(two numbers) and calculates their sum
    int x;
    int y;
    printf("Enter your first number"); 
    scanf("%d", &x);
    
    printf("Enter Your second number");
    scanf("%d",&y);
    
    int sum = x +y; 
    printf("The sum of your two numbers is: %d", sum);

return 0;
}
// A program that takes the user's name and prints it telling them their name

char main () { // here we define the data type of the function as char since we will be working with characters
    
    
    char myName[5]; /* in C, string is not a formal data type. So we define the data type of the variable
     as a character. Then we use '[]' to specify the number of characters in the string. This variable can hold 6 
     characters since it begins indexing from zero. The variable will ONLY hold the number of characters you specified.
     For example, a 7 letter word like "Salemah", will only hold "Salema", since the no of characters is 
     specified as 5. {S[0] A[1] L[2] E[3] M[4] [A][5]} */
    
    printf("Enter your name:");
    scanf("%s", &myName); // the data type of a string is %s 

    printf("Your name is %s", myName);
return 0;
}