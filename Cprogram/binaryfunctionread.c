#include<stdio.h>
struct student
	{
		int roll;
		char name[20];
		float marks;
	};
void main()
{
	struct student s;
	FILE *file;
	char ch='y';
	file=fopen("c:\\cprogram\\stu.txt","rb");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	while((fread(&s,sizeof(s),1,file))!=NULL)
	{
		printf("name: %s\t roll:%d\t marks:%f",s.name,s.roll,s.marks);
	}
	fclose(file);
}
