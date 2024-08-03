#include <stdio.h>
void main() 
{
	int n,i,c,fact,choice,rem, fib1,fib2,pre,next;
	while(1)
	{
		printf("\n\n1: prime or not");
		printf("\n2: positive or negetive");
		printf("\n3: odd/even ");
		printf("\n4: fibonacci ");
		printf("\n5: factorial ");
		printf("\n6: exit");
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
			printf("enter a number :");
			scanf("%d",&n);
			if(n>0)
			printf("it is positive");
			else
			printf("it is negetive");
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
			fib1=1;
			fib2=1;
			pre=fib1;
			printf("enter the num upto fibonacci :\n");
			scanf("%d",&n);
			printf("%d",fib1);
			do
			{ 
				next=fib2+pre;
				pre=fib2;
				fib2=next;
				printf("\t%d", pre);
			}
				while(n>next);
	        break;
		case 5:
			printf("enter a number : ");
			scanf("%d",&n);
			fact=1;
			for(i=1;i<=n;i++)
			fact = fact*i;
			 printf("\nfactorial value is %d",fact);
			 break;
		 case 6:
			exit(0);
			 break;
	 	 }
	
		}
		
	}

