#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int i=0;
	printf("enter the first string: ");
	gets(str1);
	printf("enter the second string : ");
	gets(str2);
	while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0') 
	{
		i++;
	}
	if(str1[i]=='\0'&& str2[i]=='\0')
	{
		printf("\nstrings are equal");
	}
	else 
	{
		printf("\n strings are unequal");
	}
}
