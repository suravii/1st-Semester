#include <stdio.h>      //entire fx
#include <conio.h>
struct student
{
    char name[10];
    int roll_num;
};
void main()
{
	struct student s1={"Ram",10};
	display(s1);
}
display(struct student s2)
{
	printf("name : %s",s2.name);
	printf("\nroll number : %d",s2.roll_num);
	return;
}

