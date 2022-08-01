#include <stdio.h>

int main(){
    int stid[4][2];
    int i;
    for (i=0; i<=3; i++){
        printf("\n Enter roll no. and marks");
        scanf("%d %d", &stid[i][0], &stid[i][1]);
    }
    
    for (i=0; i<= 3; i++){
    printf("\n%d %d", stid[i][0], stid[i][1]); 
    }
}

