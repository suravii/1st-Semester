#include <stdio.h>
union student
{
    char name[10];
    int roll_no;
};
void main()
{
    union student stu={"Ram",10};
    display(stu);
}
display(union student s)
{
    printf("name:%s \n roll number:%d",s.name,s.roll_no);
}
