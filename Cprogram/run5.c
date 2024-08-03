#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},i;
	printf("array of elements\t value\t\t address\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]\t\t\t    %d \t\t %u\n",i,a[i],&a[i]);
		printf("array element \t\t value \t\t address\n");
		printf("a[%d]\t\t\t    %d \t\t %u\n",i,*(a+i),a+i);
	}
	
}

