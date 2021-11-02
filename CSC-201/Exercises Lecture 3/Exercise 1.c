#include <stdio.h>

int main(){
    float pricePerItem;
    int quantity;
    float Expenses;
    float discount;
    printf("Enter the price"); // price per item
    scanf("%f", &pricePerItem);
    
    printf("Enter The quantity");
    scanf("%d", &quantity);
     Expenses = pricePerItem* quantity;
    if (quantity > 1000){
        discount = 0.10*Expenses;
        float new_expenses = Expenses - discount;
        printf("Your final discount is %f", new_expenses);

    }
    else{
        printf("Expenses %f", Expenses);
    }
    return 0;
}