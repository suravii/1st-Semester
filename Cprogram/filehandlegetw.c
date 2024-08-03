#include<stdio.h>
int main()
{
	FILE *file;
	int num,i;
	file=fopen("c:\\cprogram\\integer.txt","w");
	for(i=0;i<=10;i++)
	{
		putw(i,file);
	}
	fclose(file);
	file=fopen("c:\\cprogram\\integer.txt","r");
	while((num=getw(file))!=EOF)
	{
		printf("%d\t",num);
	}
	fclose(file);
}
