#include <stdio.h>
#include <conio.h>
struct student
{
	char *name;
	int *roll_no;
};
int main()
{
	struct student stu;
	printf("size of stu: =%d\n", sizeof(stu));
	printf("\n Enter name of student:");
    scanf("%s",stu.name);
    printf("\n Enter roll number of student:");
    scanf("%d",&stu.roll_no);
    printf("student name :%s\n roll_no :%d",stu.name,stu.roll_no);
    
}
