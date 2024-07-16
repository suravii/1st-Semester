#include <stdio.h>
void main() 
{
	int n,i,c,fact,choice,rem;
	while(1)
	{
		printf("\n1: prime");
		printf("\n2: factorial ");
		printf("\n3: odd/even ");
		printf("\n4: exit");
		printf("\nyour choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			
		case 1:
			printf("enter a number :");
			scanf("%d",&n);
			c=0;
			for (i=2;i<=n/2;i++)
			{
				if(n%i==0)
			 	{
			 		c=1;
			 		break;
			 	}
			}
			 if(c==0)
			 printf("a prime number");
			 else
			 printf("not a prime");
			  break;
		case 2:
			printf("enter a number : ");
			scanf("%d",&n);
			fact=1;
			for(i=1;i<=n;i++)
			fact = fact*i;
			 printf("\nfactorial value is %d",fact);
			 break;
		case 3:
			printf("enter a number : ");
			scanf("%d",&n);
			rem=n%2;
			if(rem==0)
			printf("\n%d is even",n);
			else
			printf("\n%d is odd",n);
			 break;
		 case 4:
			exit(0);
			 break;
	 	 }
	
		}
		
	}

