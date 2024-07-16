#include <stdio.h>
void main() 
{
	int n,i;
	printf("prime no. between 1 and 300 are\n");
	for (i=2;i<=300;i++)
	{
		for(n=2;n<=i/2;n++)
	{
		if(i%n==0)
		{
			break;
		}
	}
		 if(i== n-1)
		printf("\n%d ",i);
		
	
}
	
}
