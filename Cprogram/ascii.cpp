/*Program to read two M*N matrices and display their sum/difference*/
#include <stdio.h>
#include <conio.h>
#define M 3
#define N 3
void main()
{
int matrix1[M][N], matrix2[M][N], sum[M][N], i, j;
printf("\nEnter the elements of first matrix:\t");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d", &matrix1[i][j]);
		}
	}
printf("\nThe first matrix is:\n");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%d\t", matrix1[i][j]);
		}
	printf("\n");
	}
	printf("\nEnter the elements of second matrix:\t");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d",&matrix2[i][j]);
		}
	}

printf("\nThe second matrix is:\n");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%d\t",matrix2[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}

printf("\nThe sum of the matrices is:\n");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("\t%d", sum[i][j]);
		}
	printf("\n");
	}
getch();
}



