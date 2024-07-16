#include <stdio.h>
void main() 
{ 
char choice='y';
int num;
while(choice == 'y')
{
	printf("enter the num : ");
	scanf("%d",&num);
	printf("\nenter num is : %d",num);
	printf("\ndo you want to enter another num?");
	scanf(" %c",&choice);
}
}
