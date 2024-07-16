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
	file=fopen("c:\\cprogram\\stu.txt","wb");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	while(ch=='y')
	{
		printf("enter the name, roll number, marks:\n");
		scanf("%s %d %f",s.name,&s.roll,&s.marks);
		fwrite(&s,sizeof(s),1,file);
		printf("do u want to add more record:");
		ch=getche();
	}
	fclose(file);
	
	file=fopen("c:\\cprogram\\stu.txt","rb");
	if(file== NULL)
	{
		printf("error");
		exit(1);
	}
	while((fread(&s,sizeof(s),1,file))!=NULL)
	{
		printf("\nname: %s\t roll:%d\t marks:%f",s.name,s.roll,s.marks);
	}
	fclose(file);
}
