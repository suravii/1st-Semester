#include <stdio.h>
 
int main()
{
  int i,j,k,  sum = 0,arow,acolumn,brow,bcolumn;
  int a[10][10], b[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d %d", &arow, &acolumn);
  printf("Enter the elements of first matrix\n");
  for (  i = 0 ; i < arow ; i++ )
   {
	   	for ( j = 0 ; j < acolumn ; j++ )
	   	{
	   		scanf("%d", &a[i][j]);
		}
      
    } 
	printf("\nthe matrix A is:\n ");
		for(i=0;i<arow;i++)
		{
			for(j=0;j<acolumn;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &brow, &bcolumn);
 
  if ( brow != acolumn )
   {
   	 printf("Matrices with entered orders can't be multiplied with each other.\n");
	}
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (  i = 0 ; i < brow ; i++ )
   {
	   	for ( j = 0 ; j < bcolumn ; j++ )
	   	{
	   		scanf("%d", &b[i][j]);
		}
      
	} 
	printf("\nthe matrix B is:\n ");
		for(i=0;i<brow;i++)
		{
			for(j=0;j<bcolumn;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
 
    
    for ( i = 0 ; i < arow ; i++ )
    {
      for ( j = 0 ; j < bcolumn ; j++ )
      { multiply[i][j] =0;
        for ( k = 0 ; k < acolumn ; k++ )  //or brow
        { 
          multiply[i][j] += a[i][k]*b[k][j];
        }
      }
    }

    printf("Product of entered matrices:\n");
 
    for ( i = 0 ; i < arow ; i++ )
    {
      for ( j = 0 ; j < bcolumn ; j++ )
       {
       	printf("%d\t", multiply[i][i]);
		} 
 
      printf("\n");
    }
  }
 
  return 0;
}
