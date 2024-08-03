#include<stdio.h>
void main()
{
	float a=10.5,b=10.5;
	float *p1,*p2;
	p1=&a;
	p2=&b;
	if(p1<p2)
	printf("%u is less than %u",p1,p2);
	if(p1>p2)
	printf("\n%u is greater than %u",p1,p2);
	if(p1==p2)
	printf("\nNot possible");
	printf("\n p1-p2 is: %d",p1-p2);
}
