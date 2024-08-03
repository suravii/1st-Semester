#include<stdio.h>
void main()
{
	int a,b,lt,gt,le,ge,ee,ne;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("\nenter the second number :");
	scanf("%d",&b);
	lt= (a<b);
	gt= (a>b);
	le= (a<=b);
	ge= (a>=b);
	ee = (a ==b);
	ne= (a!=b);
	printf("\nlt=%d", lt);
	printf("\ngt=%d", gt);
	printf("\nle=%d", le);
	printf("\nge=%d", ge);
	printf("\nee=%d",ee);
	printf("\nne=%d", ne);
	
}
