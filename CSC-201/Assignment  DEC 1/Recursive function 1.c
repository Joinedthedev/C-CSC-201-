#include <stdio.h>
int main(){
 int count;
 int n;
 int sum = 0;

 scanf("%d", &n);
    for(count=0; count<= 11; count++){
        if (n%2==0){
            sum = sum + n;
            count++;
        
        
        }
        
    }   
printf("%d", sum);
}