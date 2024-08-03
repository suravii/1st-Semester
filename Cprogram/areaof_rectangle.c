//wap that take length and breadtha as input and display area of a rectangle
#include<stdio.h>
#include<conio.h>
void main()
{
	float l, b,a;
	printf("enter the length  :");
	scanf("%f",&l);
	printf("enter the breadth :");
	scanf("%f",&b);
	a= (l*b);
	printf("area of rectangle is : %f", a);
	getch();
}
