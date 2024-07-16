#include<stdio.h>
enum boolean
{
    true,false
};
enum boolean even(n)
{
    if(n%2==0)
    return(true);
    else
    return(false);
}
void main()
{
    int x;
    enum boolean r;
    printf("enter any number");
    scanf("%d",&x);
    r=even(x);
    if(r==true)
    printf("even");
    else
    printf("odd");
}

