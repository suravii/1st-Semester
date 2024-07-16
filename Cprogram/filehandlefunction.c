#include<stdio.h>
void main()
{
	FILE *file;
	char name[20];
	file=fopen("c:\\cprogram\\name.txt","w");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	fputs("suravi ",file);
	fclose(file);
	printf("output");
	file=fopen("c:\\cprogram\\name.txt","r");
	fgets(name,7,file);
	printf("name: %s",name);
	fclose(file);
}
