#include <stdio.h>
struct employee
	{
	char name[20];
	int age;
	float salary;
	};
void main()
{
	struct employee e[5];
	int i;
	printf("enter the information for 5 employee?:\t");
	for(i=0;i<5;i++)
	{
		printf("\nenter the name of  %d employee:",i+1);
		scanf("%s",e[i].name);
		printf("\nenter the age of  %d employee:",i+1);
		scanf("%d",&e[i].age);
		printf("\nenter the salary of  %d employee:",i+1);
		scanf("%f",&e[i].salary);
	}
	printf("\ndetail for employee");
	for(i=0;i<5;i++)
	{
		printf("detail for %d employee",i+1);
		printf("\n The employee name is : %s",e[i].name);
		printf("\n The employee age is : %d",e[i].age);
		printf("\n The employee salary is : %f",e[i].salary);
	}
		
}

