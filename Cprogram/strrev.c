#include<stdio.h>

void main()
{
	char name[20];
	printf("enter your name : ");
	gets(name);
	strrev(name);
	printf("the reverse name is :%s",name);
}

