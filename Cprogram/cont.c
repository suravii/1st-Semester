#include <stdio.h>
void main() 
{
	int i,j;
	for (i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{ if(i==j)
		{
		 continue;
		}
		printf("\n%d\t%d\n",i,j);
	}
	}
}
