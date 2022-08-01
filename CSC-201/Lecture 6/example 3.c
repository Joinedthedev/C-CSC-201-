#include <stdio.h>

int main(){
    int x, y,o,j;
    int *z, *i;
    o = 5;
    y = 10;
    z = &y;
    i = &o;
    j = *i;
    x = *z;

    printf("%d %u %d %d %d %u", x,z,y,o,j, i );
    

}