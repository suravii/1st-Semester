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
  printf("\nsum of diagonal is:");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		if(i==j)
  		{
  			sum=sum+a[i][j];
		  }
	  }
  }
  printf("%d\n",sum);
 
}
