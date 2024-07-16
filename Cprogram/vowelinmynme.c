#include<stdio.h>
void main()
{
	int i=0,count=0;
	char name[100];
	printf("enter your name : ");
	gets(name);
	while(name[i]!='\0')
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		count++;
		i++;
	}
	printf("number of vowels in my name is :%d",count);
}

