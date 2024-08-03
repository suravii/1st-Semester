#include<stdio.h>
void main()
{
	FILE *file;
	char string[20];
	file=fopen("c:\\cprogram\\csit.txt","r");
	fgets(string,20,file);
	printf("reading the content: %s",string);
	if(feof(file)!=0)
	{
		printf("\nend of file");
	}
	if(ferror(file)==0)
	{
		printf("\nfile successfully read");
	}
	fclose(file);
}

