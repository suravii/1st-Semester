#include <stdio.h>      
#include <conio.h>
union student
{
	int roll_no;
	char name[10];
	float fee;
};
void main()
{
	union student s;
	printf("Enter the roll number:");
	scanf("%d",&s.roll_no);
	printf("\nEnter the name:");
	scanf("%s",s.name);
	printf("\nEnter the fee:");
	scanf("%f",&s.fee);
	printf("\nDetail information");
	printf("\nRoll no:%d\t Name:%s\t fee:%f",s.roll_no,s.name,s.fee);
}
