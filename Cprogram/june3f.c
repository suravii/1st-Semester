#include <stdio.h>
void main()  //calling function
{ printf("I'm in main");
	Nepal();  //function call
	//India();
	//China();
	printf("\nI'm finally in main");
}
Nepal()
{
	printf("\nI'm in Nepal");
	India();  //function call
	printf("\nI'm back in Nepal");
}
India()
{
	printf("\nI'm in India");
	China();
		printf("\nI'm back in India");
}
China()
{
	printf("\nI'm in China");
		printf("\nI'm back in China");
	
}

