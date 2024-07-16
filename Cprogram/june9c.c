#include <stdio.h>    //callby value
void fx( int,int,int*, int*);    //fx declare
void main()
{int x=100;
int y=50;
int s,d;
fx(x,y,&s,&d);   //fx call
printf("\ns=%d  d=%d",s,d);
}
void fx(int a, int b, int *sum, int *diff)   //fx define
{*sum=a+b;
*diff=a-b;
}


