#include<stdio.h>
void main()
{
	char name[30];
	int i=0,count;
	printf("enter your name : ");
	gets(name);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("number of character is %d",count);
}
