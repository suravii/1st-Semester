#include <stdio.h>
void main() 
{
	int n=1,i;
	printf("prime no. between 1 and 300 are\n");
	while(n<=300)
	{i=2;
		while(i<n)
		{ if(n%i==0)
			break;
			else
		 	i++;
		}
		if(i==n)
		printf("%d\n",n);
		n++;
	}
	printf("enter any key to exit");
}
	
