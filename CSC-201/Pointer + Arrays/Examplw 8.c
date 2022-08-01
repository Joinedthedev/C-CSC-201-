#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "Turkish Nile";
    char WHODA[] = "Hello Stringggg";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen(WHODA);
    
    printf("\nstring = %s lenth = %d", arr, len1);
    printf("\nstring = %s lenth = %d", WHODA, len2);
}