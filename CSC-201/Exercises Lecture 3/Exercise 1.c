#include <stdio.h>

/*This program calculates the expenses of the items purchased based on the price per item and quantity of said item.
If the quantity of said items exceeds 1000, a 10% discount is applied on the total expenses*/


int main(){
    float pricePerItem, Expenses, discount;
    int quantity;
    printf("Enter the price"); // price per item
    scanf("%f", &pricePerItem);
    
    printf("Enter The quantity"); // Number of items 
    scanf("%d", &quantity);
     Expenses = pricePerItem* quantity; //Calculates the total expenses
    
    /*the if else statement below checks if the quantity of items entered exceeds 1000. If it does a 10% discount is
    applied to the total expenses*/

    if (quantity > 1000){
        discount = 0.10*Expenses; // discount will be 10% of the total expenses
        float new_expenses = Expenses - discount; //New expenses will be expenses minus discount to apply 10% off
        printf("Your final discount is %f", new_expenses);

    }
    else{
        printf("Expenses %f", Expenses);
    }
    return 0;
}