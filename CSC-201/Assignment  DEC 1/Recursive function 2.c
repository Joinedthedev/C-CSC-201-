#include <stdio.h>
 

int Counter(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        Counter(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=Counter(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}