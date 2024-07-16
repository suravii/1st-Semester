#include <stdio.h>
void main() 
{
	int a,b,op, ch='y';
	while(ch!='x')
	{
	printf("\nenter desired operator(+, -, *,  /) : ");
	scanf(" %c",&op);
	printf("enter any 2 number : ");
	scanf("%d%d",&a,&b);

	switch(op)
    	{
		
		case '+':
			 printf("addition : %d",a+b);
			 break;
		case '-':
			 printf("subraction : %d", a-b);
			 break;
		case '*':
			printf("Multiplication : %d", a*b);
			 break;
		 case '/':
			printf("division : %d",a/b);
			 break;
		default:
			 printf("Error!You have entered an invalid choice");
		 	 	 
	 }
		printf("\nPress y to conitnue\n Press x to exit \n ");
		scanf(" %c",&ch);
	}
	
}

	
	
	
	
	
	
