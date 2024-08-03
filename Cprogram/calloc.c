#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,*ptr,sum=0,i,*p;
	printf("number of element to be entered:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	p=ptr;
	if(ptr==NULL)
	{
		printf("error! memory not allocated ");
		exit(0);
	}
	printf("enter the element in the array: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",ptr);
		sum=sum+*ptr;
		ptr++;
	}
	printf("array elements:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	printf("\nsum=%d",sum);
free(ptr);	
}
