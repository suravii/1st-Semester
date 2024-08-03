#include<stdio.h>
#define row 3
#define column 3
void main()
{
	int a[row][column], i,j,sum=0;
	printf("the elements are ");
	 for(i=0;i<row;i++)
 {for(j=0;j<column;j++)
 {scanf("%d",&a[i][j]);
 }
 
 }
 printf("display the array:\n");
for(i=0;i<row;i++)
 	{for(j=0;j<column;j++)
 		{
 		printf("%d\t",a[i][j]);
	 	}
 			printf("\n");
 	}

	printf("display process\n");
	
		
 	for(i=0;i<row;i++)
 	{for(j=0;j<column;j++)
 		{
 		sum=sum+a[i][j];
	 	}
 			printf("\nsum of row and column is : %d",sum);
 	}

}
