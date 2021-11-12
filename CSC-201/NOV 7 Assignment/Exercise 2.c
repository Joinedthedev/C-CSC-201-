/* z = 100
while (z>=0)
sum += z;

^^The code above will run infinitely since z will always be greater than zero. Sum is also not defined
above.
*/

#include <stdio.h>

int main(){
    int sum = 0;
   int z = 100;
    while (z>=0){
    sum+=z;
    --z; 
    }
printf("The sum is:%d", sum);
return 0;
}