#include<stdio.h> 
void main()
{
 int num,i;
 printf("enter a number :");
 scanf("%d", &num);
 i=2;
 while(i<= num-1)
 { if(num%i==0)
 	{	printf("it is not a prime num");
 		continue;
 	}
	 i++;
} 
	if(i==num)
	{
	 printf("\nit is a prime num");
	}

 
}
