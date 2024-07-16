#include<stdio.h>
void main()
{
	char name[20];
	printf("enter name :");
	scanf(" %[^a]",name);
	printf("name is: %s",name);
	
}
