#include<stdio.h>
void main()
{
	auto int a=5;    //global variable
	{
		 auto int a=10;
		{	
			auto int a=15;    //local variable
			printf("\n%d",a);
		}
		printf("\n%d",a);
	}
	printf("\n%d",a);
}
