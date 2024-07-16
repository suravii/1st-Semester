#include <stdio.h>      
#include <conio.h>
typedef struct student
{
    char name[10];
    int roll_num;
}student;
void display(student);
void main()
{
	student stu;
	printf("enter the name:");
	scanf("%s",stu.name);
	printf("\n Enter roll number of student:");
    scanf("%d",&stu.roll_num);
    display(stu);
}
void display(student s)
{
	printf("name: %s",s.name);
	printf("\nroll no: %d",s.roll_num);
}

