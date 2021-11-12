#include <stdio.h>
/*So I created a function for exercise 5 because of the redudant code that would be needed to get it for 5 subjects
I'm not explaining it though because we haven't done functions yet Basically the first part of the code is what
you'd normally do. Plus we haven't covered functions in depth yet. 12/11/21 ^_^*/

void Grade(char Subject[], int Grade){
    if (Grade>=60){
        printf("%s First division\n", Subject);
    }
    else if(Grade>=50){
        printf("%s second division\n", Subject);
    }
    else if (Grade>= 40){
        printf("%s third division\n", Subject);
    }
    else{
        printf("%s failed\n", Subject);
    }
}

int main(){
    char subIN[15];
    int gradIN;
    int counter = 0;

    for (counter=0;counter != 5;){
       printf("\nEnter your subject: ");
    scanf("%s", &subIN);
    
    printf("Enter the grade for the subject entered: ");
    scanf("%d", &gradIN);
       
       Grade(subIN, gradIN);
        counter++;
    }

}