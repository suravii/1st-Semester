#include <stdio.h>
void main() 
{
	int n,i,c;
	printf("prime no. between 1 and 300 are\n");
	for (i=2;i<=300;i++)
	{	c=0;
		for(n=2;n<=i/2;n++)
		{
		if(i%n==0)
		{	c=1;
			break;
		}
	}
		 if(c==0 & i!=1)  //removing 1 from this condition
		{printf("\n%d ",i);
		}
	}

	
}
