//wap to input base and height and find the area
#include<stdio.h>
#include<conio.h>
void main()
{
	float b, h,a;
	printf("enter the base  :");
	scanf("%f",&b);
	printf("enter the height :");
	scanf("%f",&h);
	a= (b*h)/2;
	printf("area of triangle is : %f", a);
	getch();
}
