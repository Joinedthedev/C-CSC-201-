#include <stdio.h>

int main(){
    float costPrice;
    float sellingPrice;
    
    printf("Enter cost price");
    scanf("%f", &costPrice);

    printf("Enter selling price");
    scanf("%f", &sellingPrice);

    float profit = sellingPrice - costPrice;

    if (costPrice> sellingPrice){
        printf("You've incurred a lost\n");
        printf("Your lost is %f\n", profit);
    }   
    else{
        printf("You've incurred a profit");
        printf("Your profit is %f\n", profit);
    }
}