#include<stdio.h>
int main()
{
	FILE *fp;
	char name[20];
	int roll_no;
	char section;
	char address[20];
	float marks;
	fp=fopen("c:\\cprogram\\student1.txt","w");
	printf("enter the name:");
	scanf("%s",name);
	printf("enter roll no of %s:\t",name);
	scanf("%d",&roll_no);
	fflush(stdin);
	printf("\n Enter address of %s:\t",name);
    gets(address);
    printf("\n Enter marks of %s:\t", name);
    scanf("%f", &marks);
    fprintf(fp, "Name=%s\n Roll=%d\n Address=%s\n Marks=%.2f", name, roll_no, address, marks);
    printf("\n Completed");
    fclose(fp);

}
