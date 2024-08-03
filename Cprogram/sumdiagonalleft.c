#include <stdio.h>
 #define m 4
#define n 4
int main()
{
  int i,j, sum = 0,row,column;
  int a[m][n];
  printf("enter the element in matirx a:\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		 scanf("%d",&a[i][j]);
	  }
  }
  printf("display the matrix \n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printf("%d\t",a[i][j]);
	  }
	  printf("\n");
  }
  //to add diagonal elements
  for(i=0;i<m;i++)
  {
  	for(j=m-1;j>=0;j--)
  	{

  		{
  			sum=sum+a[i][j];
  			i++;
		  }
	  }
  }
  printf("sum is %d\n",sum);
 
}
