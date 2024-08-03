//wap to input 3*3 matrix and display the largest element
#include<stdio.h>
#define m 3
#define n 3
void main()
{
	int a[m][n],i,j,largest;
	printf("enter the elements of a:\n");
	for(i=0;i<m;i++)                          //array initialization
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix a :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//largest element
	largest=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>largest)
			{
				largest=a[i][j];
			}
		}
	}
	printf("the largest element of matrix is %d",largest);
	
}
}
