#include <stdio.h>
void main()
{
	char name[20]="c program";
	int i;
	printf("stdring element \t address\n");
	printf("---------\n");
	for(i=0;i<9;i++)
	{
		printf("name[%d]= %c\t%u\n",i,name[i],&name[i]);
	}
	printf("string element \t address\n");
	printf("---------\n");
	for(i=0;i<9;i++)
	{
		printf("name[%d]= %c\t%u\n",i,*(name+i),name+i);
	}
	
}
