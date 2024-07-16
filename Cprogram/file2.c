#include<stdio.h>
extern int m;
void fun2()
{ m=2;
printf("\nthis is in file2.c where m=%d",m);
}
