#include <stdio.h>
#define m 3
#define n 3
int main()
{
int a[m][n],transpose[n][m],i,j;
printf("\nEnter the elements of matrix:\t");
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
			{
			scanf("%d", &a[i][j]);
			}
		}
printf("\nThe matrix  is:\n");
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
			{
			printf("%d\t", a[i][j]);
			}
		printf("\n");
		}
for(i=0;i<m;i++)          
	{
	for(j=0;j<n;j++)
		{
		transpose[j][i]=a[i][j];   //finding transpose of given matrix
		}
	}
printf("\nthe transpose is:\n");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%d\t",transpose[i][j]);
		}
	printf("\n");
	}
}

