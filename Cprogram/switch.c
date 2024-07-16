#include <stdio.h>
void main() 
{
	int choice;
	printf("\nWhich programming language do u want to learn : ");
	printf("\n1:Cprogram\t 2:C++program\t 3:Java Program\t 4:C# program \n ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			 printf("Cprogram");
			 break;
		case 2:
			 printf("C++program");
			 break;
		case 3:
			printf("Java program");
			 break;
		 case 4:
			printf("c# program");
			 break;
		default:
			 printf("You have entered an invalid choice");
		 	 	 
	}
}
