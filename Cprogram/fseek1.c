#include<stdio.h>
void main()
{
	FILE *file;
	char ch[30];
	int no;
	file=fopen("c:\\cprogram\\class.txt","r+");
	fgets(ch,25,file);
	printf("information of the file :%s",ch);
	fseek(file, 8, 0);
	fputs("JAVA PROGRAM",file);
	rewind(file);
	fgets(ch,25,file);
	printf("\nchange information :%s",ch);
	no = ftell(file);
	printf("\nsize of file:%d",no);
	fclose(file);
}

