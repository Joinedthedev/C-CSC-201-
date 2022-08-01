#include <stdio.h>

int main(){

 int a[10] = {1,2,3,4,5,6,7,8,9,10};
int z[10];
int i, j=0;


 for (i=9; i>=0; i--){

     z[j] = a[i];
    j++;
    
 }

for (i=9; i>9; i++){
    printf("%d",z[i]);
}
return 0;
}