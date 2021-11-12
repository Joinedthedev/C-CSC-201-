#include <stdio.h>
int main(){
    double radius, pi;
    printf("Enter radius");
    scanf("%lf",&radius);//lf is the format of a double
    printf("Enter Pi");
    scanf("%lf", &pi);
    double areaOfCircle = pi*(radius * radius);// formula for area of circle 

printf("The area of your circle is: %lf", areaOfCircle);
return 0;
}