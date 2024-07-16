#include <stdio.h>
int *add(int *a, int *b)
{
	int c;
	c=(*a)+(*b);
	return(&c);
}
void main()
{
	int a,b,z;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("\nenter the second number: ");
	scanf("%d",&b);
	int *p= add(&a, &b);
	printf("\nThe sum is :%d",*p);
}
	
