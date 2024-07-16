#include <stdio.h>
void main() 
{
	int a,b;
	char op,choice,ch;
	choice='y';
	start:
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
		
	}
	printf("\ndo u want to continue ");
		ch= getch();
		if(ch=='y')
		goto start;
	
}

	
	
	
	
	
	
