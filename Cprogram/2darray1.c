#include<stdio.h>
#define row 3
#define column 3
void main()
{
	int a[row][column], i,j;
    printf("enter the element in the array :");
	for(i=0;i<row;i++)
	{for(j=0;j<column;j++)
		{
		
		scanf("%d",&a[i][j]);
		}
	}	
 	printf("element in the array:\n");
 	for(i=0;i<row;i++)
 	{for(j=0;j<column;j++)
 		{
 			printf("%d",a[i][j]);
	 	}
 			printf("\n");
 	}	
}
