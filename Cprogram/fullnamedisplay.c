#include<stdio.h>
void main()
{
	char name[ 30];
	printf("enter the name: ");
	scanf("%s",&name);
	gets(name);
	printf("\nmy name is %s",name);
	puts(name);
}
