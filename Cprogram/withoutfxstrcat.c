#include<stdio.h>
#include<string.h>
void main()
{
	char first_name[]="suravi";
	char last_name[]="shrestha";
	char full_name[30];
	int i,j;
	for(i=0;first_name[i]!='\0';i++)
	full_name[i]=first_name[i];
	full_name[i]=' ';
	
	for(j=0;last_name[j]!='\0';j++)
	full_name[i+j+1]=last_name[j];
	full_name[i+j+1]='\0';
	printf(" %s",full_name);
	getch();
	
}
