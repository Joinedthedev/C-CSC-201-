#include <stdio.h>

int main()
{
    int counter = 0;
    int total = 0;
    int grade;

    float average;

    while (grade != -1)
    {
        printf("Enter grade, -1 to terminate");
        scanf("%d", &grade);

        total += grade;
        counter++;
    }

    if (counter != 0)
    {
        average = (float)total / counter;
        printf("\nClass average is: % .2f", average);
    }

    else{
        printf("No grades were entered");
    }
}