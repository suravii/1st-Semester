#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("Entered number is positive");

    }
    else if(num<0)
    {
        printf("Entered number is negative");
    }
    else
    {
        printf("Entered number is 0");
    }
    
}
