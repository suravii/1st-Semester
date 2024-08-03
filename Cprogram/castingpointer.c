#include<stdio.h>
void main()
{ 
	int a;
	float b;
	void *vptr=&a;  //referencing
	*(int*)vptr=5;     //casting
	printf("value of a:%d",a);
	vptr=&b;
	*(float*)vptr=10.5;
	printf("\nvalue of a:%f",b);

}
