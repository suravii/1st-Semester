#include<stdio.h> 
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a<=5)
	goto label;  //if true cha bhane label ko print hunxa of false cha bhane chai dubai print huncha
	else
	{
		printf("hello");
		printf("C");
	
		
	}
	label:
		printf("\ngoto statement bye bye");
	}
	
