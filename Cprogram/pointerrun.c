#include<stdio.h>
void main()
{
	int a=5, *p=&a;
	printf("The address of a:%u",&a);
	printf("\nThe address of a:%u",p);
	printf("\nThe value of a:%d",a);
	printf("\nThe value of a:%d",*p);   //dereferencing( content of content)
	printf("\nAddress of p:%u",&p);
}

