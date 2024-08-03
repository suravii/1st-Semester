//imp question
#include<stdio.h>
#include<string.h>
void main()
{
	char a[30],b[30];
	int i;
	printf("enter the string to copy: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	
	}
	b[i]='\0';
	printf("\n The content of a is (pasted as):\t");
	puts(b);
	getch();
	
}
