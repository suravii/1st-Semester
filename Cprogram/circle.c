//wap to take radius as input of a circle and display the area
#include<stdio.h>
#include<conio.h>
#define PI 3.1428
void main()
{
	float radius, area;
	printf("enter the radius of circle: ");
	scanf("%f",&radius);
	area= PI*radius*radius;
	printf("the area of the circle is : %f", area);
	getch();
}
