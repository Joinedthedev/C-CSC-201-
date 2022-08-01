#include <stdio.h> // includes the libary that has standard input output functions(printf, scanf etc)


// REMEMBER TO COMMENT OUT WHATEVER FUNCTIONS YOUR NOT TYRING TO RUN BY USING "/* */" OTHERWISE THE CODE WONT RUN
 
 /*
 
 int main () {
    int myNo; // first you define the variable. This is what will be attached to your scanf.
    
    printf("I see you are trying to learn scan f. Enter a number if so!"); /* The print f statement that comes before
    the scanf is what the console will prompt the user. So when this code is ran, the console will prompt the statement above.
    
    scanf("%d", &myNo); /* The easiest way to understand the correlation between scanf and printf coming from python is to 
    think of it as being linked to the print statement above and providing an input function to it. scanf takes input and stores
    it into whatever pre defined variable of your choice. In this case scan f is taking input and storing it into the variable "myNo".
    The "%d", specifies the data type of the variable we are storing the user input into. Since our variable is the 'int' type, we use "%d".
    scanf("Format/data type specifier", Variable Address)
    
    The "&"(ampersand) is used to indicate the address of the variable. We haven't gotten into pointers & memory management yet
    so I wouldn't worry too much about the exact use of ampersand yet. Just know its used to get the address of the variable. 

    printf("I see. So your number is: %d", myNo);

return 0; this return doesnt really serve any function other than telling the computer your code works. When your exit code is zero
it generally means there are no errors. Your return value is not equal to your output value
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

//NOTE: We did not use scan f with strings yet but you can read, practice and use this if you want to read ahead

// A program that takes the user's name and prints it telling them their name. 

*/
int main () { 
     
    char myName[5]; /* in C, string is not a formal data type. So we define the data type of the variable
     as a character. Then we use '[]' to specify the number of characters in the string. This variable can hold 6 
     characters since it begins indexing from zero. The variable will ONLY hold the number of characters you specified.
     For example, a 7 letter word like "Salemah", will only hold "Salema", since the no of characters is 
     specified as 5. {S[0] A[1] L[2] E[3] M[4] [A][5]} */
    
    printf("Enter your name:");
    scanf("%s", &myName); /* the format of our variable is a string hence we use %s (Strings do not actually require the ampersand next 
    to the variable in the scanf function because the character array denotes the address of the array itself so no need to specify. BUT STILL,
     USE IT FOR NOW FOR GOOD PRACTICE)*/

    printf("Your name is %s", myName); 
return 0;
}