#include <stdio.h>
// A program that takes the cost price and selling price of a commodity to determine if a profit or loss has been incurred

int main(){
    float costPrice; 
    float sellingPrice;
    
    printf("Enter cost price");
    scanf("%f", &costPrice); // takes user input of cost price

    printf("Enter selling price"); 
    scanf("%f", &sellingPrice); // takes user input of selling price

    float profit = sellingPrice - costPrice; // formula for profit and loss as well

    if (costPrice> sellingPrice){ /* an if statement that determines whether or not a profit or loss has incurred based on whether costprice
                                    exceeds the selling price.*/
        printf("You've incurred a lost\n");
        printf("Your lost is %f\n", profit);
    }   
    else{
        printf("You've incurred a profit");
        printf("Your profit is %f\n", profit);
    }
}