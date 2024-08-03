#include <stdio.h>
double mul(int, int);
void main()
{
int a,b;
double (*fptr)();
double multiply;
printf("\nEnter values of a and b:\t");
scanf("%d %d",&a,&b);
fptr=mul;
multiply=(*fptr)(a,b);
printf("\nMultiplication:%lf",multiply);
printf("\naddress of pointer is :%u",&fptr);
printf("\naddress of pointer is :%u",fptr);
getch();
}

double mul(int x,int y)
{
double product;
product = x*y;
return product;
}

