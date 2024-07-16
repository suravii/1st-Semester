#include <stdio.h>
#define m 2
#define n 2
 int main()
{
  int a[3][3],b[3][3],i,j,k,multiply[3][3];
  printf("Enter the elements of first matrix\n");
  for (  i = 0 ; i < m ; i++ )
   {
	   	for ( j = 0 ; j < n ; j++ )
	   	{
	   		scanf("%d", &a[i][j]);
		}
      
	} 
		printf("\nthe matrix A is:\n ");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
  
 printf("Enter the elements of second matrix\n");
 for (  i = 0 ; i < m ; i++ )
   {
	   	for ( j = 0 ; j < n ; j++ )
	   	{
	   		scanf("%d", &b[i][j]);
		}
      
	} 
		printf("\nthe matrix B is:\n ");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
 
    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < n ; j++ )
      { multiply[i][j] =0;
        for ( k = 0 ; k < m ; k++ )
        { 
          multiply[i][j] += a[i][k]*b[k][j];
        }
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < n ; j++ )
        printf("%d\t", multiply[i][j]);
 
      printf("\n");
    }
  
 
  return 0;
}
