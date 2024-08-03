#include<stdio.h>
int main()
{
	int a;
	FILE *file;
	char ch;
	file= fopen("c:\\cprogram\\csit.txt","r");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	
	/*while((ch=getchar())!=EOF)
	{
		putc(ch,file);
	}
	fclose(file);*/
	
    while((ch=getc(file))!=EOF)
    {
    	printf(" %c",ch);
	}
	fclose(file);
}
