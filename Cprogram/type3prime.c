#include <stdio.h>
int prime();

void main()
{
    int check;
    check=prime();
    if(check==0)
    {
        printf(" not Prime");
    }
    else if(check==1)
    {
        printf("Prime");
    }
}
int prime()
{
    int i=2, num, result;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(i<=num-1)
    {
        if(num%i==0)
        {
            return(0);            //Not-Prime.      
        }
        i++;
    }
    if(i==num)
    {
        return(1);           //Prime
    }
}
