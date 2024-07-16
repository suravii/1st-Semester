#include <stdio.h>    //callby value
void swap( int*, int*);    //fx declare
void main()
{int a,b;
a=50;
b=60;
printf("\nbefore the swap value of a : %d",a);
printf("\nbefore the swap value of b : %d",b);
swap(&a,&b);
printf("\nafter the swap value of a : %d",a);
printf("\nafter the swap value of b : %d",b);
}
void swap(int *x, int *y)
{int temp;
temp=*x;
*x=*y;
*y=temp;

}
