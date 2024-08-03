#include <stdio.h>
int check_positivity();

void main()
{
    int check, number;
    check= check_positivity();
    if(check==0)
    {
        printf("The number is Positive.");
    }
    else if(check==1)
    {
        printf("The number is Negative.");
    }
    
}
int check_positivity()
{   
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>=0)
    {
        return(0);                  
    }
    else
    {
        return(1);
    }
}
