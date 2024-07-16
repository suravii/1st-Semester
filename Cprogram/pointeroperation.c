#include<stdio.h>
void main()
{
	int *p,x;
	p=&x;
	printf("enter the x\t");
	scanf("%d",p);
	printf("\nthe value of x is %d",*p);
	printf("\naddress is x is %u",p);
	printf("\np+1= %u",p+1);
	printf("\np-5= %u",p-5);
}
