#include <stdio.h>
/*
//just replicating the code from the notes
//(A)
 int main(){
    int x = 10, y = 20 ;
    
    if ( x == y ){
    printf( "\n%d %d", x, y );
    }
 return 0;
 }
// Outputs nothing

//(B)
 int main( ){
    int x = 3, y = 5 ;
    
    if ( x == 3 ){
    printf ( "\n%d", x );
    }

    else{
    printf( "\n%d", y );
    }
 return 0;
 }
 // prints x

 // (C)

 int main (){
     int x = 3;
     float y = 3.0;
    if (x==y){
    printf("x and y are equal");
    }
    else{
        printf("x and y are not equal");
    }
return 0;
}
// prints x and y are equal. the computer is smart enough to know they're the same.
*/
//(D)
int main(){
    int i = 65;
    char j = 'A';
    if (i==j){
    printf("c is WOW");
    }
    else{
    printf("C is a headache");
    }   
return 0;
}
// prints 'c is wow' because the condition is true. 65 representS 'A' on the ASCII.