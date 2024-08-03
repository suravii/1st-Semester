#include<stdio.h>
void main()
{
	int a=5, *ptr=&a;
	printf("value of a:%d",a);
	*ptr=10;
	printf("value of a:%d",a);
}
