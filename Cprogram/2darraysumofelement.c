
#include<stdio.h>
void main()
{
		int a[3][3],b[3][3],i,j,sum[3][3];
		printf("\nenter the element in A matrix:\n");
		for(i=0;i<3;i++)
		{
				for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		
		}
		printf("\nthe matrix A is:\n ");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("enter the element in B matrix:\n");
		for(i=0;i<3;i++)
			{
					for(j=0;j<3;j++)
					{
						scanf("%d",&b[i][j]);
					}
		
			}	
		printf("the matrix B is:\n");
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						printf("%d\t",b[i][j]);
					}
				printf("\n");
			}	
		
		for(i=0;i<3;i++)
		 		{
				 	for(j=0;j<3;j++)
		 			{
		 				sum[i][j]=a[i][j]+b[i][j];
			 		}
			 			
				}
					printf("addition of 2 array is :\n");
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("%d\t",sum[i][j]);
						}
						printf("\n");
					}
			
	

}
