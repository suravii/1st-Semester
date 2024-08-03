#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int d;
	printf("enter the first string: ");
	gets(a);
	printf("enter the second string : ");
	gets(b);
	d=strcmp(a,b);
	if(d>0)
	printf("\n%s is greater than %s by ASCII value difference %d",a,b,d);
	else if(d<0)
	printf("\n%s is smaller than %s by ASCII value difference %d",a,b,d);
	else
	printf("\n%s is same as  %s ",a,b);
	getch();
}

