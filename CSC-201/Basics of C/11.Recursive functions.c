#include <stdio.h>

int factorial (int n){

if (n == 0 || n == 1){
    return 1;
 
} 
else{
    return(n*factorial(n-1));
}

};

int main(){
    int num, result;
    printf("Enter a number to find it's factorial:");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Factorial is not possible for a neg num");
    }
    else{
        result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }
    return 0;
}


//Fibbo sequence boii

int fibbo(int no){
    switch (no)
    {
    case 0:
        return 0;
        break;
    
    case 1:
        return 1;
        break;

    default:
        break;
    }

    int fn =  fibbo(no - 1) +  fibbo(no - 2);
    return fn;
}

int main(){
    int n, m = 0, i;
    
    printf("Enter Total Terms:n");
    scanf("%d", &n);
    
    printf("Fibonacci Series terns are:n");
    
    for(i=1; i<=n; i++){

        printf("%d\n", fibbo(m));
        m++;


    }
    return 0;
}