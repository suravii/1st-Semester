#include<stdio.h>
void main()
{
	int a=10;
	float b=10.5;
	void *vptr;
	vptr=&a;    //r
	printf("value of a :%d",*((int*)vptr));
	vptr=&b;       //r
	printf("\nvalue of b :%f",*((float*)vptr));
	
}

