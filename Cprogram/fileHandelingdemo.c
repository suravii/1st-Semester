#include<stdio.h>
int main()
{
	int a;
	FILE *file;
	file= fopen("cprogram.txt","w");
	printf("enter the number");
	scanf("%d",&a);
	fprintf(file,"%d",a);
	fclose(file);
}
