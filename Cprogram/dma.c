#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,*p,sum=0,i,*p1;
	printf("enter the size of the array:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	p1=p;
	if(p==NULL)
	{
		printf("error! memory not allocated ");
		exit(0);
	}
		printf("enter the element in the array: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",p);
		sum=sum+*p;
		p++;
	}

	printf("array elements:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",*p1);
		p1++;
	}
	printf("\nsum=%d",sum);
	
}
