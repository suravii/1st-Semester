#include<stdio.h>
int main()
{
	FILE *fs,*fd;
	char ch;
	printf("Enter name of file to copy\n");
    gets(fs);
	fs=fopen("c:\\cprogram\\copy.txt","r");
	 printf("Enter name of target file\n");
    gets(fd);
	fd=fopen("c:\\cprogram\\paste.txt","w");
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		break;
		else
		fputc(ch,fd);
	}
	fclose(fs);
	fclose(fd);
}
