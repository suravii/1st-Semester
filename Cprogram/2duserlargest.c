//wap to input 2*2 matrix passing  fx and display the  elements
#include<stdio.h>
void display_array(int a[][2]);
void main()
{
	int b[2][2],i,j;
	printf("enter the elements of a:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	display_array(b);
}
	
	void display_array(int c[][2])        //formal value
	{
		int i,j;
		printf("the b array is :\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	
	

