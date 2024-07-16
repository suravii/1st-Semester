#include<stdio.h>
void fun();
void main()
{
	auto int a=5;    //if not initialized it gives garbage value
	printf("value of a :%d",a);
	fun();
}
void fun()
{	auto int a=10;  
	printf("\nvalue of a within the fun fx is:  %d",a);
}
