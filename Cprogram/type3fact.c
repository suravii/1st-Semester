#include <stdio.h>
int factorial();

void main()
{
    int fact;
    
    fact= factorial();
    printf("%d", fact);

}
int factorial()
{
    int i, factorial=1, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        factorial= factorial* i;
    }
    printf("The factorial of %d is: ", num);            
    return(factorial);
}
