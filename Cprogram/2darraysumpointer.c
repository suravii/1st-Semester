#include<stdio.h>
void main()
{
	int i,j,row,column,sum=0;
	int a[2][3],b[2][3],add[2][3];
	printf("enter the matrix a\n" );
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("the a matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	printf("enter the matrix b\n" );
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("the b matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(b+i)+j));
		}
		printf("\n");
	}
	printf("the sum of matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(add+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
		}
	}
	printf("addition of above is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(add+i)+j));
		}
		printf("\n");
	}
	
	
	
}
