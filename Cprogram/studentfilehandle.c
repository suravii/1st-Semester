#include<stdio.h>
void main()
{
	FILE *file;
	int roll_num;
	char name[20];
	file=fopen("c:\\cprogram\\student.txt","w");
		if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	printf("enter the roll number :");
	scanf("%d",&roll_num);
	printf("enter the name :");
	scanf("%s",name);
	fprintf(file,"%d %s",roll_num,name);
	fclose(file);
	file=fopen("c:\\cprogram\\student.txt","r");
	fscanf(file,"%d %s",&roll_num,name);
	printf("roll num: %d",roll_num);
	printf("\nname : %s",name);
	fclose(file);
}

