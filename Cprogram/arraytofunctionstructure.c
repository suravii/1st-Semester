#include <stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    int roll_no;
}stu[5];                          

void display(struct student s);

void main()
{
    int i;
    printf("Enter details of 5 students\n");
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("Enter name of Student No.%d: ",(i+1));
        scanf("%s", stu[i].name); 
        printf("Enter  Roll Number:");
        scanf("%d", &stu[i].roll_no);
        printf("\n\n");
    }
    printf(" details of five students are:\n");
    printf("Name\t  Roll No.:\n");
    for(i = 0; i < 5; i++)
    {
        display(stu[i]);          
    }
}

void display(struct student s)
{
    int i;
    printf("%s\t\t%d\n", s.name, s.roll_no);
}
