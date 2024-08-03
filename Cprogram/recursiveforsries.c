#include<stdio.h>
int sum(int n );   //fx declare
void main()
{int num,add;
printf("enter n:\t");
	scanf("%d",&num);
	add=sum(num);
	printf("the sum is : %d",add);
	
	}
	int sum(int x) 
	{
	if(x==0)
	return(0);
	else
	{return(x+sum(x-1));
	
	}
	}
