#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,*ptr,i;
	printf("initial size of the arrray is 4");
	ptr=(int*)calloc(4,sizeof(int));
	printf("\ninitial size of array is %u",ptr);
	if(ptr==NULL)
	{
		printf("error! memory not allocated ");
		exit(0);
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nenter the element at the index %d : ",i);
		scanf("%d",ptr+i);
	}
	printf("\nIncreasing the size of array by 5 element");
	ptr=(int*)realloc(ptr,9*sizeof(int));
	printf("\ninitial size of array is %u",ptr);
	if(ptr==NULL)
	{
		printf("error! memory not allocated ");
		exit(0);
	}
	printf("\nenter the 5 more elements");
	for(i=4;i<9;i++)
	{
		printf("\nenter the element at index %d : ",i);
		scanf("%d",ptr+i);
	}
	printf("\nfinal array elements are :");
	for(i=0;i<9;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	free(ptr);
}
