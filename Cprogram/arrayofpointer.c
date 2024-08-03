#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5};
	int *ptr[5],i;
	printf("assigning the address of a in the pointer ptr");
	for(i=0;i<5;i++)
	{
		ptr[i]=&a[i];       //reference
	}
	printf("\ncontent of a are: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*ptr[i]);
	}
}

