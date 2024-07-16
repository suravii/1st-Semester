#include<stdio.h>
void main()
{
	float a[]={1,2,3,4,5};
	float *p1,*p2;
	p1=a;
	p2=a+3;
	printf("\n%f",*p1);
	printf("\n%f",*p2);
	printf("\np2-p1 is :%d",p2-p1);
	printf("\np1-p2 is :%d",p1-p2);    //'-' indicates 2nd memory location is to right of 1st pointer
	
}

