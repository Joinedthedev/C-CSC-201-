#include <stdio.h>

int main(){
    int count =0;
    int sum, arr[10] = {1,2,3,4,-5,-6,-7,8,-9, 10};
    int i;

    int Random = rand() % 10;
    int Randex = Random;
    for(i=0; i++; i<10){
        count++;
        sum += arr[i];
        if (arr[Randex] < -1){
            break;
        }
        
        
    }
    int avrg = sum/count;
        printf("the sum is %d:, n\the avrg is %f, n\the number of numbers is %d:", sum, avrg,count);
return 0;
}
