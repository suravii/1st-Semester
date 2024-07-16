#include<stdio.h>
#include<string.h>
void main()
{
	char name[30];
	int length;
	printf("enter your name : ");
	gets(name);          
	length=strlen(name);
	printf("the length of name is :%d",length);
	
}
/* int length=0
while(name[i]!='\0'
length++
i++
*/
