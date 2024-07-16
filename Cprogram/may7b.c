#include<stdio.h>
void main()
{
	int a,b,sum,sub,multiply,div,rem;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("\nenter the second number :");
	scanf("%d",&b);
	sum = a+b;
	sub = a-b;
	multiply = a * b;
	div = a/b;
	rem = a%b;
	printf("\nthe sum is :%d", sum);
	printf("\nthe sub is :%d", sub);
	printf("\nthe multiplication is :%d", multiply);
	printf("\nthe sum um is :%d", div);
	printf("\nthe rem is :%d", rem);
}
