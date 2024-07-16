#include<stdio.h>
void main()
{
	int a,b,c,z,k,l;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("\nenter the second number :");
	scanf("%d",&b);
	printf("\nenter the third number :");
	scanf("%d",&c);
	z = a>b && a==b;
	k = (a>=b) || a<b;
	l = a>b && b>c && c==a;
	printf("\nz=%d", z);
	printf("\nk=%d", k);
	printf("\nl=%d", l);
}
