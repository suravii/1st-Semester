#include<stdio.h>
int main()
{
	int a;
	FILE *file;
	file= fopen("c:\\cprogram\\csit.txt","w");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	printf("enter the number");
	scanf("%d",&a);
	fprintf(file,"%d",a);
	fclose(file);
}
