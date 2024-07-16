#include <stdio.h>   //asked in exam
void odd();
void even();
int n=1;
 
void main()
{
    odd();
}
void odd()
{
    if(n<10)
    {
        printf("%d\t", n+1);
        n++;
    }
    even();
    return;
}
void even()
{
    if(n<=10)
    {
        printf("%d\t", n-1);
        n++;
    }
    odd();
    return;
}
