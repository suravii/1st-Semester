#include<stdio.h>
void main()
{
	int a;
	char ch;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a character");
	scanf(" %c",&ch); //must be a space infront of %c
	printf("\nNumber :%d\tcharacter:%c", a,ch);
}
