// addition of two interger
#include<stdio.h>
#include<conio.h>
void main()
{
	short int a,b, sum;
	long int x,y, add;
	unsigned int o,p, addition;
	printf("input two short interger :");
	scanf("%hd%hd", &a,&b);
	printf("input two long integer :");
	scanf("%ld%ld",&x,&y);
	printf("input two unsigned integer :");
	scanf("%u%u",&o,&p);
	sum = a+b;
	add = x+y;
	addition = o+p;
	printf("the sum of short interger is: %hd", sum);
	printf("\nthe sum of long interger is: %ld", add);
	printf("\nthe sum of unsigned interger is: %u", addition);
}
