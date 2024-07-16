#include <stdio.h>
#include<conio.h>
#include <string.h>
union student
{
    char name[10];
    int roll_num;
};
void display1(char *n);
void display2(int roll);

void main()
{
    union student s1;
    strcpy(s1.name, "Ram");
    display1(s1.name);
    s1.roll_num = 5;
    display2(s1.roll_num);
}
void display1(char *n)
{
    printf("Name: %s\n", n);
}
void display2(int r)
{
    printf("Roll Number: %d\n", r);
}

