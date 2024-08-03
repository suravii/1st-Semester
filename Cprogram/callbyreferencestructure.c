#include <stdio.h>      
#include <conio.h>
struct student
{
    char name[10];
    int roll_num;
};
void main()
{
	struct student s1={"Ram",10};
	display(&s1);
}
display(struct student *p)     //*p pointer that points to line 11 &
{
	printf("name : %s",p->name);
	printf("\nroll number : %d",p->roll_num);
	return;
}


