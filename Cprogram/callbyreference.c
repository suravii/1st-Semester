#include <stdio.h>
void modify(int *a);   //fx declare
void main()
{int a=2;
printf("\nbefore the fx call value of a : %d",a);
modify(&a);    //fx call gareko
printf("\nafter fx call the value of a is : %d",a);
}
void modify(int *x)
{
*x=*x+5;

}

