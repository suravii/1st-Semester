#include<stdio.h> 
void main()
{
	int fib1,fib2,pre,next,num;
	fib1=1;
	fib2=1;
	pre=fib1;
	printf("enter the num upto fibonacci :\n");
	scanf("%d",&num);
	printf("%d",fib1);
	do
	{ 
		next=fib2+pre;
		pre=fib2;
		fib2=next;
		printf("\t%d", pre);
	}
	while(num>next);
		
}
